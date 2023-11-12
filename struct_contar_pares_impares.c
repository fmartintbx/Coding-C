#include <stdio.h>

// Definición de la estructura paridad_t
struct paridad_t {
    int n_pares;
    int n_impares;
    int n_ceros;
};

// Función para contar elementos pares, impares y ceros usando un bucle while
struct paridad_t contar_pares_impares(int a[], int tam) {
    struct paridad_t resultado = {0, 0, 0};
    int i = 0; // Inicializamos el índice i en 0

    while (i < tam) {
        if (a[i] == 0) {
            resultado.n_ceros++;
        } else if (a[i] % 2 == 0) {
            resultado.n_pares++;
        } else {
            resultado.n_impares++;
        }
        i++; // Incrementamos el índice i
    }

    return resultado;
}

int main() {
    const int N = 10;  // Definir el tamaño del arreglo como una constante
    int arreglo[N];

    // Solicitar al usuario ingresar los elementos del arreglo
    printf("Ingrese %d elementos del arreglo:\n", N);
    int i = 0; // Inicializamos el índice i en 0

    while (i < N) {
        scanf("%d", &arreglo[i]);
        i++; // Incrementamos el índice i
    }

    // Llamar a la función para contar pares, impares y ceros
    struct paridad_t resultado = contar_pares_impares(arreglo, N);

    // Mostrar el resultado por pantalla
    printf("Elementos pares: %d\n", resultado.n_pares);
    printf("Elementos impares: %d\n", resultado.n_impares);
    printf("Ceros: %d\n", resultado.n_ceros);

    return 0;
}
