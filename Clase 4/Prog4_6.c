// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.6
Parametros por referencia*/

int f1(int *);

int main(){

    int i, k = 4;
    for(i = 1; i <= 3; i++){
        printf("Valor de K antes de llamar a la funcion: %d \n", ++k);
        printf("Valor de K despues de llamar a la funcion: %d \n", f1(&k));
    }

}

int f1(int *r){
    *r += *r;
}