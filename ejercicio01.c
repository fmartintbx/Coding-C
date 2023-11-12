#include <stdio.h>
#include <assert.h>

// Definición de la función que imprime "Hola" en números pares hasta n
void hola_hasta(int n)
{
    int i = 0;
    
    // Asegura que n sea un número positivo
    assert(n > 0);
    
    while (i < n)
    {
        if (i % 2 == 0)
        {
            // Imprime el valor de i y "Hola" si i es par
            printf("%i Hola\n", i);
        }
        
        i = i + 1;  // Incrementa el valor de i en cada iteración del bucle
    }
}

int main(){
    // Llama a la función hola_hasta con n igual a 10
    hola_hasta(10);

    return 0;
}
