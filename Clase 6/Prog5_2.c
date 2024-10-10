// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.2
Eleccion*/

int main(){

    int ele[5] = {0};
    int i, vot;
    printf("Ingresa el primer voto, 0 para finalizar \n");
    scanf("%d", &vot);
    while(vot){
        if ((vot > 0)&&(vot < 6)){
            ele[vot - 1]++;
        } else {
            printf("Voto ingresado incorrecto \n");
            printf("Ingresa el voto, 0 para finalizar \n");
            scanf("%d", &vot);
        }
        
    }
    printf("Resultados de la eleccion \n");
    for ( i = 0; i <= 4; i++){
        printf("Candidato %d: %d ", i+1, ele[i]);
    }
    

}