#include <stdio.h>

// Definición de la función que calcula la suma de números enteros desde 1 hasta n
int suma_hasta(int n) {
    int i = 0, suma = 0;
    
    while (i <= n) {
        suma += i;
        i++;
    }
    
    return suma;
}

int main() {
    int n = 10, suma;
    
    // Llamada a la función para calcular la suma y almacenar el resultado
    suma = suma_hasta(n);
    
    // Imprimir el resultado de la suma
    printf("La suma de 1 a %i es: %i\n", n, suma);
    
    return 0;
}
