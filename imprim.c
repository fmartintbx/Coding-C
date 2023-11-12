#include <stdio.h>
#include <assert.h>

// Función para imprimir enteros
void imprimir_entero(char variable, int valor) {
    printf("El valor de %c es: %d\n", variable, valor);
}

int main(void) {
    int x, y, z;

    // Solicitar valores iniciales al usuario
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);
    printf("Ingrese el valor de z: ");
    scanf("%d", &z);

    // Verificar precondición
    assert(y > x && x > 0);

    // Asignaciones condicionales
    if (x <= y) {
        x = y * z;
        y = z + y + x;
        z = x + y;
    } else {
        x = y;
        y = z;
        z = x;
    }

    // Verificar postcondición
    assert((x == y * z && y == z + y + x && z == x + y) || (x == y && y == z && z == x));

    // Imprimir los valores finales
    imprimir_entero('x', x);
    imprimir_entero('y', y);
    imprimir_entero('z', z);

    return 0;
}
