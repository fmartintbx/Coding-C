#include <stdio.h>

int main() {
    int x, y, z;
    
    // Precondición: x = X, y = Y, z = Z
    // Entrada de valores iniciales
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);
    printf("Ingrese el valor de z: ");
    scanf("%d", &z);

    // Asignación múltiple equivalente
    int temp_y = y;
    int temp_x = x;
    int temp_z = z;
    
    x = temp_y;
    y = temp_y + temp_x + temp_z;
    z = temp_y + temp_x;

    // Postcondición: x = Y, y = Y + X + Z, z = Y + X
    // Salida de valores finales
    printf("El valor final de x es: %d\n", x);
    printf("El valor final de y es: %d\n", y);
    printf("El valor final de z es: %d\n", z);

    return 0;
}
