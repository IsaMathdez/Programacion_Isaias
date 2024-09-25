// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.13
Suseccion de Fibonacci*/

int main(){

    int i, pri = 0, seg = 1, sig; //variables de los primeros dos valores
    printf("\t %d \t %d", pri, seg);
    for(i = 3; i <= 50; i++){ //Para los demas valores hasta el 50
        sig = pri + seg; //Suma los dos anteriores
        pri = seg;
        seg = sig;
        printf("\t %d", sig); //Va imprimiendo
    }

}