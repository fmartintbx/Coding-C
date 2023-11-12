#include <stdio.h>
#include <stdbool.h>

#define N 5

bool todos_pares(int tam, int a[]){
    int i = 0;
    bool todo_par = true;
    while(i < tam){ 
        todo_par = todo_par && (a[i]%2 == 0);
        i =i + 1;
    }
    return todo_par;
}
bool existe_multiplo(int m, int tam, int a[]){ 
   int i = 0;
    bool existe_mul = false;
    while(i<tam){ 
        existe_mul = existe_mul || (a[i]%m == 0);
        i = i + 1;
    }
    return existe_mul;
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

int  main(){ 
    int a[N];
    bool todos, existe;
    pedir_arreglo(N, a);
    imprimir_arreglo(N,a);
    todos = todos_pares(N,a);
    existe =existe_multiplo(5, N, a);
    if(todos){ 
        printf("Todos son pares \n");
    }
    if(existe){ 
        printf("Existe un multiplo \n");
    }
    return 0;
    
}