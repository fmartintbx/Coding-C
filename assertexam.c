#include <stdio.h>
#include <assert.h>

int ingresar_entero() {
    int x;
    printf("Ingrese un valor entero: ");
    scanf("%d", &x);
    return x;
}

void imprimir_entero(int x) {
    printf("El valor final es: %d\n", x);
}

int main() {
    int x, y, z;

    // Precondición: x = X, y = Y, z = Z, Z mod 2 ≠ Y mod 2
    x = ingresar_entero();
    y = ingresar_entero();
    z = ingresar_entero();
    assert(z % 2 != y % 2);

    // Variables auxiliares
    int temp_x = x;
    int temp_y = y;
    int temp_z = z;

    if (temp_x % 2 == 0) {
        x = temp_x + 1;
        y = temp_y + temp_z + temp_y;
        z = 2 * temp_x;
    } else {
        x = temp_x - 1;
        y = temp_y - temp_z - temp_y;
        z = 2 * temp_x;
    }

    // Postcondición: z = 2*X ∧ ((x=X+1 ∧ y=Y+Z+Y)) ∨ (x=X-1 ∧ y=Y-Z-Y)
    imprimir_entero(z);

    return 0;
}
