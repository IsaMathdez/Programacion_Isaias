
#include <stdio.h>

/* Programa 1.9*
Convierte acres a hectareas*/

int main(){

    float eca;
    printf("Ingrese la extension de la estacia: \n");
    scanf("%f", &eca);
    eca = eca*4047/10000;
    printf("Extension en hectareas: %5.2f", eca);

}