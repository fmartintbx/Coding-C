#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool es_primo(int n) {
    bool resultado = true;
    int i = 2;

    while (i < n) {
        if (n % i == 0) {
            resultado = false;
        }
        i = i + 1;
    }
    return resultado;
}

// Función para encontrar el n-ésimo número primo
int nesimo_primo(int N) {
    int i = 2;
    int resultado = 0;
    int cont_primos = 0;

    while (cont_primos < N) {
        if (es_primo(i)) {
            resultado = i;
            cont_primos++;
        }
        i = i + 1;
    }
    return resultado;
}

int main() {
    int n = 0, resultado = 0;

    printf("Ingrese un número natural: ");
    scanf("%i", &n);

    if (n < 0) {
        printf("El número ingresado es negativo, debe ser positivo\n");
    } else {
        resultado = nesimo_primo(n);
        printf("El n-ésimo primo es: %i\n", resultado);
    }

    return 0;
}
