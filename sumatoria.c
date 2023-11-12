#include <stdio.h>

int sumatoria(int tam, int a[]){ 
    int i = 0;
     int suma = 0;
    while(i < tam){ 
        suma = suma + a[i];
        i = i+1;
    }
    return  suma;
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
    int a[10]; 
    pedir_arreglo(10, a);
    imprimir_arreglo(10, a);
    int suma;
    suma=sumatoria(10, a);
    printf("La suma del arreglo es:  %i\n", suma);
    
    return 0;

 }