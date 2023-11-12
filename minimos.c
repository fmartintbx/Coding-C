#include <stdio.h>
#include <limits.h>

// Función para encontrar el mínimo entre los números pares en un arreglo
int minimo_pares(int tam, int a[]) { 
    int resultado = INT_MAX; // Inicializa resultado con un valor grande (mayor que cualquier número)
    int i = 0;

    // Encuentra el primer número impar en el arreglo
    while (a[i] % 2 == 1) {
        i = i + 1;
    }
    
    // Si se encontró un número impar, asigna su valor a resultado
    if (i < tam) {
        resultado = a[i];
    }

    // Busca el mínimo entre los números pares en el arreglo
    while (i < tam) { 
        if (resultado > a[i] && a[i] % 2 == 0) { 
            resultado = a[i];
        }
        i = i + 1;
    }
    
    return resultado;
}

// Función para encontrar el mínimo entre los números impares en un arreglo
int minimo_impares(int tam, int a[]) { 
    int resultado = INT_MAX; // Inicializa resultado con un valor grande (mayor que cualquier número)
    int i = 0;

    // Encuentra el primer número par en el arreglo
    while (a[i] % 2 == 0) {
        i = i + 1;
    }
    
    // Si se encontró un número par, asigna su valor a resultado
    if (i < tam) {
        resultado = a[i];
    }

    // Busca el mínimo entre los números impares en el arreglo
    while (i < tam) { 
        if (resultado > a[i] && a[i] % 2 == 1) { 
            resultado = a[i];
        }
        i = i + 1;
    }
    
    return resultado;
}

// Función para pedir al usuario que ingrese elementos en un arreglo
void pedir_arreglo(int n_max, int a[]) { 
    int i = 0;
    while (i < n_max) { 
        printf("Dame un numero: ");
        scanf("%i", &a[i]);
        i = i + 1;
    }
}

// Función para imprimir los elementos de un arreglo
void imprimir_arreglo(int n_max, int a[]) { 
    int i = 0;
    while (i < n_max) { 
        printf("%i ", a[i]);
        i = i + 1;
    }
    printf("\n");
}

// Función para encontrar el mínimo entre dos números
int minimo(int x, int y) {
    int resultado = 0;
    if (x <= y) {
        resultado = x;
    } else {
        resultado = y;
    }
    return resultado;
}

int main() { 
    int a[5];
    int minpar, minimpar, mini;
    
    pedir_arreglo(5, a); // Llama a la función para que el usuario ingrese valores en el arreglo
    imprimir_arreglo(5, a); // Llama a la función para imprimir los valores del arreglo
    
    minpar = minimo_pares(5, a); // Encuentra el mínimo entre los números pares
    minimpar = minimo_impares(5, a); // Encuentra el mínimo entre los números impares
    mini = minimo(minpar, minimpar); // Encuentra el mínimo entre los mínimos de pares e impares
    
    printf("El mínimo de los pares es: %i\n", minpar); // Imprime el mínimo de los números pares
    printf("El mínimo de los impares es: %i\n", minimpar); // Imprime el mínimo de los números impares
    printf("El mínimo del arreglo es: %i\n", mini); // Imprime el mínimo entre los mínimos de pares e impares

    return 0;
}
