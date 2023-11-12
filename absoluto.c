#include <stdio.h>
#include <assert.h>

unsigned int absoluto(int x)
{
    unsigned int resultado = 0;
    if( x >= 0) 
    {
      resultado = x;
    } else 
    {
      resultado = -x;
    }   
    return resultado;
}

int main(){
    int absolut, x;

    absolut = 0;
    x = 7;

    absolut = absoluto(x);
    printf("El absoluto de %i es: %i\n", x,absolut);
    return 0;
}