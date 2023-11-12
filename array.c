#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int pedir_entero(void)
{
    int x;

    printf("Ingrese un Numero Entero: ");
    scanf("%d", &x);

    return x;
}

void imprimir_entero(char variable, int valor)
{
    printf("El valor de %c es: %d\n", variable, valor);
}

bool pedir_bool(void)
{
    int x;
    bool temp;

    printf("Ingrese un Bool: ");
    scanf("%d", &x);

    temp = x;

    return temp;
}

void imprimir_bool(char variable, bool temp)
{
    printf("El valor de %c es: %s\n", variable, temp ? "True" : "False");
}

int main(void)
{
    int x, y;
    bool z;

    x = pedir_entero();
    y = pedir_entero();
    z = pedir_bool();

    int X = x, Y = y;
    bool Z = z;

    assert(x == X && y == Y && z == Z);

    x = X * X + Y * Y;
    y = X % Y;
    z = X < Y;

    assert((x == X * X + Y * Y) && (y == X % Y) && (z == (X < Y)));

    imprimir_entero('x', x);
    imprimir_entero('y', y);
    imprimir_bool('z', z);
}