#include <stdio.h>
#include <stdbool.h>

// Definición de la función que verifica si una letra es una vocal
bool es_vocal(char letra){

    // La función devuelve true si la letra es una vocal (minúscula o mayúscula), de lo contrario, devuelve false
    return (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'u' || letra == 'o' || 
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'U' || letra == 'O');
}

int main(){
    char let;
    bool es_voc = false;

    printf("Ingrese una letra: ");
    scanf("%c", &let);
    
    // Llama a la función es_vocal para verificar si la letra ingresada es una vocal
    es_voc = es_vocal(let);

    if (es_voc) {
        printf("La letra ingresada es una vocal.\n");
    } else {
        printf("La letra ingresada no es una vocal.\n");
    }

    return 0;
}
