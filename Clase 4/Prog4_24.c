// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.24
Mas y mas Parametros*/

int f1(void);
int f2(void);
int f3(void);
int f4(void);
int k = 5;

int main(){

    int i;
    for (i = 1; i <= 4; i++){

        printf("El resultado de la funcion f1 es %d \n", f1());
        printf("El resultado de la funcion f2 es %d \n", f2());
        printf("El resultado de la funcion f3 es %d \n", f3());
        printf("El resultado de la funcion f4 es %d \n", f4());
    }
}

int f1(void){
    k *= k;
    return k;
}

int f2(void){
    int k = 3;
    k++;
    return k;
}

int f3(void){
    static int k = 6;
    k += 3;
    return k;
}

int f4(void){
    int k = 4;
    k = k + ..k;
    return k;
}