#include <stdio.h>

// Estructura para almacenar los datos de estadísticas
struct datos_t {
    float maximo;
    float minimo;
    float promedio;
};

// Función para calcular las estadísticas (máximo, mínimo y promedio) de un arreglo de números
struct datos_t stats(int tam, float a[]) {
    struct datos_t resultado;
    int i = 0;
    resultado.maximo = a[0];
    resultado.minimo = a[0];
    resultado.promedio = 0;

    while (i < tam) {
        if (resultado.maximo < a[i]) {
            resultado.maximo = a[i];
        }
        if (resultado.minimo > a[i]) {
            resultado.minimo = a[i];
        }
        resultado.promedio = resultado.promedio + a[i];
        i = i + 1;
    }
    resultado.promedio = resultado.promedio / tam;

    return resultado;
}

// Función para pedir al usuario que ingrese elementos en un arreglo de números
void pedir_arreglo(int n_max, float a[]) {
    int i = 0;
    while (i < n_max) {
        printf("Dame un numero: ");
        scanf("%f", &a[i]);
        i = i + 1;
    }
}

// Función para imprimir los elementos de un arreglo de números
void imprimir_arreglo(int n_max, float a[]) {
    int i = 0;
    while (i < n_max) {
        printf("%f ", a[i]);
        i = i + 1;
    }
    printf("\n");
}

int main() {
    float a[5];
    struct datos_t result;

    pedir_arreglo(5, a); // Llama a la función para que el usuario ingrese valores en el arreglo
    imprimir_arreglo(5, a); // Llama a la función para imprimir los valores del arreglo

    // Calcula las estadísticas de los valores en el arreglo y almacena el resultado en la estructura result
    result = stats(5, a);

    printf("El promedio es %f \n", result.promedio); // Imprime el promedio
    printf("El máximo es %f \n", result.maximo); // Imprime el máximo
    printf("El mínimo es %f \n", result.minimo); // Imprime el mínimo

    return 0;
}
