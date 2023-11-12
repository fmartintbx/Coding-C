#include <stdio.h>

// Función para intercambiar dos elementos en un arreglo
void intercambiar(int tam, int a[], int i, int j) { 
    int z = a[i];
    a[i] = a[j];
    a[j] = z;
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

int main() { 
    int a[10], i, j;

    pedir_arreglo(10, a);
    imprimir_arreglo(10, a);
    
    // Llama a la función intercambiar para intercambiar los elementos en las posiciones 2 y 3 del arreglo
    intercambiar(10, a, 2, 3);
    
    imprimir_arreglo(10, a);

    return 0;
}

