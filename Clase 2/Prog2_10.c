// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 2.10
Determina si un numero es par, impar o nulo*/

int main(){

    int num;
    printf("Ingrese el numero: \n");
    scanf("%d", &num);
    if (num == 0){
        printf("Es nulo");
    } else {
        if ( pow(-1,num)>0 ){
            printf("Es par");
        } else {
            printf("Es impar");
        }
    }
    
}