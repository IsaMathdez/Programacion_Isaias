// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.2
Cubo con fucniones, conflicto con variable local*/

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
    int I = 2;
    return (I*I*I);
}