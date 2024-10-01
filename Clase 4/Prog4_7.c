// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.7
Anterior con parametros por valor*/

int f1(int);

int main(){

    int i, k = 4;
    for ( i = 0; i <= 3; i++){

        printf("Valor de K antes de la funcion: %d \n", ++k);
        printf("Valor de K despues de la funcion: %d \n", f1(k));

    }

}

int f1(int r){
    r += r;
    return r;
}