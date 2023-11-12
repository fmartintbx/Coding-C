#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

struct asoc {
clave_t clave;
valor_t valor;
};

int pedir_numero(){
    char buff[10] = {0};
    int numero = 0;

    printf("Ingrese un valor: ");
    fgets(buff, 10, stdin);
    numero = atoi(buff);

    return numero;

}

char pedir_clave(){
    char buff[10] = {0};

    printf("Ingrese una clave: ");
    fgets(buff, 10, stdin);

    return buff[0];

}

bool asoc_existe(int tam, struct asoc a[], clave_t c){
    bool resultado = false;
    int i = 0;

    while(i<tam){
        if(a[i].clave == c){
            resultado = true;
        }
        i = i +1;
    }
    return resultado;
}


void pedir_arreglo(int n_max, struct asoc a[]){
        int i = 0;
        clave_t cla;
        valor_t val;
        while(i<n_max){

            cla = pedir_clave();
            val = pedir_numero();
            a[i].clave = cla;
            a[i].valor = val;

            i =i + 1;
        }

}

void imprimir_arreglo(int n_max, struct asoc a[]){
    int i = 0;
    while(i<n_max){
        printf("(%c,%i), ", a[i].clave, a[i].valor);
        i = i +1;
    }
    printf("\n");
}

int main(){
    struct asoc a[5];
    clave_t cla;
    bool resultado;

    pedir_arreglo(5,a);
    imprimir_arreglo(5,a);

    printf("Ingrese una clave a buscar: ");
    scanf("%c", &cla);
    resultado = asoc_existe(5,a,cla);

    if(resultado){
        printf("La clave existe en el arreglo\n");
    }
    else{
        printf("La clave no existe en el arreglo\n");
    }

    return 0;
}
