#include <stdio.h>

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
    int a[10];
    
    // Llama a la función para pedir al usuario que ingrese valores en el arreglo
    pedir_arreglo(10, a);
    
    // Llama a la función para imprimir los valores del arreglo
    imprimir_arreglo(10, a);

    return 0;
}
