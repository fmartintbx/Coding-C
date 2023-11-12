#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <assert.h>

struct datos {
    bool hay_numeros_pares;
    int mayor_numero_par;
};

struct datos hay_numeros_pares(int tam, int a[]) {
    assert(tam >= 2);

    struct datos result = {false, INT_MIN}; // Valor predeterminado
    int i = 0;

    while (i < tam) {
        if (a[i] % 2 == 0) {
            result.hay_numeros_pares = true;
            if (a[i] > result.mayor_numero_par) {
                result.mayor_numero_par = a[i];
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

    struct datos resultado = hay_numeros_pares(N, a);

    if (resultado.hay_numeros_pares) {
        printf("En el arreglo hay números pares.\n");
        printf("El mayor número par en el arreglo es: %d\n", resultado.mayor_numero_par);
    } else {
        printf("En el arreglo no hay números pares.\n");
    }

    return 0;
}
