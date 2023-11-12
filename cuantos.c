#include <stdio.h>

struct comp_t {
int menores;
int iguales;
int mayores;
};


struct comp_t cuantos(int tam, int a[], int elem){
    struct comp_t resultado;
    int  i = 0;
    resultado.menores = 0;
    resultado.iguales = 0;
    resultado.mayores = 0;
    while(i < tam) {
        if(a[i] < elem){
            resultado.menores = resultado.menores + 1;
        }
        else if ( a[i] == elem) {
            resultado.iguales = resultado.iguales + 1;
        }
        else
        {
            resultado.mayores = resultado.mayores + 1;
        }
        i = i+1;
    }


    return resultado;
}

void pedir_arreglo(int n_max, int a[]){
        int i = 0;
        while(i<n_max){
            printf("Dame un numero: ");
            scanf("%i", &a[i]);
            i =i + 1;
        }

}
void imprimir_arreglo(int n_max, int a[]){
    int i = 0;
    while(i<n_max){
        printf("%i ", a[i]);
        i = i +1;
    }
    printf("\n");
}

int main(){
    int a[5], elemento;
    struct comp_t result;

    pedir_arreglo(5,a);
    imprimir_arreglo(5,a);
    printf("Ingrese un elemento para comparar: ");
    scanf("%i", &elemento);
    result = cuantos(5,a,elemento);

    printf("La cantidad de elementos menores a %i es %i \n", elemento,result.menores);
    printf("La cantidad de elementos mayores a %i es %i \n", elemento,result.mayores);
    printf("La cantidad de elementos iguales a %i es %i \n", elemento,result.iguales);



    return 0;
}
