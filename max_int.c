#include <stdio.h>
#include <limits.h>

#define N 5

int maximo_negativo(int a[], int tam) {
    int i = 0;
    int max_negativo = INT_MIN; // Inicializar con el valor más pequeño posible

    while (i < tam) {
        if (a[i] < 0 && a[i] > max_negativo) {
            max_negativo = a[i];
        }
        i++;
    }

    // Verificar si se encontró algún número negativo
    if (max_negativo == INT_MIN) {
        // No se encontraron elementos negativos, devolver el neutro para int
        return 0;
    } else {
        // Devolver el elemento negativo más grande
        return max_negativo;
    }
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

    // Llamar a la función maximo_negativo y mostrar el resultado
    int resultado = maximo_negativo(arreglo, N);

    if (resultado == 0) {
        printf("No hay elementos negativos en el arreglo.\n");
    } else {
        printf("El elemento negativo más grande es: %d\n", resultado);
    }

    return 0;
}
