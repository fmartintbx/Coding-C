#include <stdio.h>
#include <assert.h>

// Definición de la función que calcula el mínimo entre dos números positivos
int minimo(int x, int y)
{
    // Asegura que x y y sean números positivos
    assert(x > 0 && y > 0);
    
    int resultado = 0;
    
    if (x > y) 
    {
        resultado = y;
    } 
    else 
    {
        resultado = x;
    }   
    return resultado;
}

int main(){
    int min, x, y;

    min = 0;
    x = 3;
    y = -4;
    
    // Llama a la función minimo para calcular el mínimo entre x e y
    min = minimo(x, y);
    
    // Imprime el valor mínimo calculado
    printf("El mínimo entre %i y %i es: %i\n", x, y, min);
    
    return 0;
}
