#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <assert.h>

struct datos {
    bool hay_multiplo_de_3;
    int mayor_multiplo_de_3;
};

struct datos hay_multiplo_de_3(int tam, int a[]) {
    assert(tam >= 2);

    struct datos result = {false, INT_MIN}; // Valor predeterminado
    int i = 0;

    while (i < tam) {
        if (a[i] % 3 == 0) {
            result.hay_multiplo_de_3 = true;
            if (a[i] > result.mayor_multiplo_de_3) {
                result.mayor_multiplo_de_3 = a[i];
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

    struct datos resultado = hay_multiplo_de_3(N, a);

    if (resultado.hay_multiplo_de_3) {
        printf("En el arreglo hay un múltiplo de 3.\n");
        printf("El mayor múltiplo de 3 en el arreglo es: %d\n", resultado.mayor_multiplo_de_3);
    } else {
        printf("En el arreglo no hay múltiplos de 3.\n");
    }

    return 0;
}
