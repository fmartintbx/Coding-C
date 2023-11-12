#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <assert.h>

struct datos {
    bool hay_multiplo_de_10;
    int mayor_multiplo_de_10;
};

struct datos encontrar_multiplo_de_10(int tam, int a[]) {
    assert(tam >= 2);

    struct datos result = {false, INT_MIN}; // Valor predeterminado
    int i = 0;

    while (i < tam) {
        if (a[i] % 10 == 0) {
            result.hay_multiplo_de_10 = true;
            if (a[i] > result.mayor_multiplo_de_10) {
                result.mayor_multiplo_de_10 = a[i];
            }
        }
        i++;
    }

    return result;
}

int main() {
    const int N = 5; // Tamaño del arreglo
    int a[N];

    printf("Ingrese %d elementos del arreglo:\n", N);
    int i = 0;

    while (i < N) {
        scanf("%d", &a[i]);
        i++;
    }

    struct datos resultado = encontrar_multiplo_de_10(N, a);

    if (resultado.hay_multiplo_de_10) {
        printf("En el arreglo hay un múltiplo de 10.\n");
        printf("El mayor múltiplo de 10 en el arreglo es: %d\n", resultado.mayor_multiplo_de_10);
    } else {
        printf("En el arreglo no hay múltiplos de 10.\n");
    }

    return 0;
}
