#include <stdio.h>
#include <assert.h>

int main(){
    int x, y, z;
    
    printf("Estado 0: x:%i y:%i z:%i \n", x, y, z); // Imprime el estado inicial de x, y y z
    
    x = 4; // Asigna el valor 4 a la variable x
    y = 9; // Asigna el valor 9 a la variable y
    z = 0; // Asigna el valor 0 a la variable z
    
    printf("Estado 1: x:%i y:%i z:%i \n", x, y, z); // Imprime el estado después de las asignaciones iniciales
    printf("x: %i y: %i\n", x, y); // Imprime los valores actuales de x e y
    
    z = x; // Asigna el valor de x a la variable z
    
    printf("Estado 2: x:%i y:%i z:%i \n", x, y, z); // Imprime el estado después de la asignación de x a z
    
    x = y; // Asigna el valor de y a la variable x
    
    printf("Estado 3: x:%i y:%i z:%i \n", x, y, z); // Imprime el estado después de la asignación de y a x
    
    y = z; // Asigna el valor de z a la variable y
    
    printf("Estado 4: x:%i y:%i z:%i \n", x, y, z); // Imprime el estado después de la asignación de z a y
    
    printf("x: %i y: %i\n", x, y); // Imprime los valores finales de x e y
    
    return 0;
}
