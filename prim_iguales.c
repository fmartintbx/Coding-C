#include <stdio.h>


int prim_iguales(int tam, int a[]) {
    int i, cantidad;
    i = 0;
    cantidad = 0;

    while(i < tam-1){
        if (a[i] == a[i+1]){
            cantidad = cantidad + 1;
        }else{
            break;
        }
        i = i+1;
    }
    // el ultimo elemento comparado es parte del tramo inicial
    // por lo tanto debo contarlo en la longitud del mismo
    if(cantidad > 0) {
        cantidad = cantidad + 1;
    }

    return cantidad;
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
    int a[5], cant;

    pedir_arreglo(5,a);
    imprimir_arreglo(5,a);
    cant = prim_iguales(5,a);
    printf("El segmento inicial es de largo: %i\n", cant);
    printf("\nSegmento inicial más largo: \n");
    imprimir_arreglo(cant,a);


    return 0;
}
