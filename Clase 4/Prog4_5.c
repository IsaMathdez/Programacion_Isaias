// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.5
Cubo usando parametros*/

int cubo(int);

int main(){

    int i;
    for(i = 1; i <= 10; i++){
        printf("El cubo de I es: %d \n", cubo(i));
    }
}

int cubo(int k){
    return (k*k*k);
}