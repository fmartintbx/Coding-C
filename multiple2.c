/*
{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}
*/
#include <stdio.h>
#include <assert.h>

int main(){
    int x, y, z, x_aux, y_aux;
    
    x = 4;   // Inicialización de x
    y = 9;   // Inicialización de y
    z = 10;  // Inicialización de z
    x_aux = 0;
    y_aux = 0;

    printf("Estado 1: x:%i y:%i z:%i\n", x, y, z); // Imprime el estado inicial de x, y y z
    printf("x: %i y: %i z: %i\n", x, y, z); // Imprime los valores actuales de x, y y z
    
    x_aux = x; // Guarda el valor actual de x en x_aux
    y_aux = y; // Guarda el valor actual de y en y_aux
    x = y;     // Asigna el valor de y a x
    
    printf("Estado 2: x:%i y:%i z: %i\n", x, y, z); // Imprime el estado después de la asignación a x
    
    y = y + x_aux + z; // Realiza la suma y asignación a y
    
    printf("Estado 3: x:%i y:%i z:%i\n", x, y, z); // Imprime el estado después de la suma y asignación a y
    
    z = y_aux + x_aux; // Realiza la suma y asignación a z
    
    printf("Estado 4: x:%i y:%i z:%i\n", x, y, z); // Imprime el estado después de la suma y asignación a z

    printf("x: %i y: %i z: %i\n", x, y, z); // Imprime los valores finales de x, y y z
    
    return 0;
}
