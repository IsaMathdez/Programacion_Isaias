// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.1
Cubo del 1 al 10 numeros con ayuda de funcion*/

int I;
int cubo(void);

int main(){

    int cub;
    for(I = 0; I <= 10; I++){
        cub = cubo();
        printf("El cubo de %d es: %d \n", I, cub);
    }

}

int cubo(void){
    return (I*I*I);
}