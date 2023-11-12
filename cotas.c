#include <stdio.h>

#define N 5

struct maxmin_t {
    int minimo;
    int indice_min;
    int maximo;
    int indice_max;
};

struct maxmin_t cotas(int a[], int tam) {
    struct maxmin_t result;

    if (tam <= 0) {
        // Manejar el caso de un arreglo vacío
        result.minimo = 0;
        result.indice_min = -1;
        result.maximo = 0;
        result.indice_max = -1;
        return result;
    }

    result.minimo = a[0];
    result.indice_min = 0;
    result.maximo = a[0];
    result.indice_max = 0;

    int i = 1;
    while (i < tam) {
        if (a[i] < result.minimo) {
            result.minimo = a[i];
            result.indice_min = i;
        } else if (a[i] > result.maximo) {
            result.maximo = a[i];
            result.indice_max = i;
        }
        i++;
    }

    return result;
}

int main() {
    int arreglo[N];

    // Solicitar al usuario ingresar el arreglo
    printf("Ingrese %d elementos para el arreglo:\n", N);

    int i = 0;
    while (i < N) {
        scanf("%d", &arreglo[i]);
        i++;
    }

    // Llamar a la función cotas y mostrar el resultado
    struct maxmin_t resultado = cotas(arreglo, N);

    printf("El mínimo elemento es %d en la posición %d\n", resultado.minimo, resultado.indice_min);
    printf("El máximo elemento es %d en la posición %d\n", resultado.maximo, resultado.indice_max);

    return 0;
}
