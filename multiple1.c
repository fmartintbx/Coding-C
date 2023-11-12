/*
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}
*/
#include <stdio.h>
#include <assert.h>

int main(){
    int x, y;
    
    printf("Estado 0: x:%i y:%i\n", x, y); // Imprime el estado inicial de x e y
    
    x = 4;
    y = 9;
    
    printf("Estado 1: x:%i y:%i\n", x, y); // Imprime el estado después de asignar valores a x e y
    
    printf("x: %i y: %i\n", x, y); // Imprime los valores actuales de x e y
    
    y = x + y;
    
    printf("Estado 2: x:%i y:%i\n", x, y); // Imprime el estado después de la suma y asignación a y
    
    x = x + 1;
    
    printf("Estado 3: x:%i y:%i\n", x, y); // Imprime el estado después de incrementar x en 1
    
    printf("x: %i y: %i\n", x, y); // Imprime los valores finales de x e y
    
    return 0;
}
