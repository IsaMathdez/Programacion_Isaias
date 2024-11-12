// Programa hecho por Isaias Matos
#include <stdio.h>
#include <stdlib.h>

/* Programa 9.16
Suma reales */

void sumypro(FILE *);

int main(){

    FILE *ap;
    if((ap = fopen("arc2.txt", "r")) != NULL){
        sumypro(ap); 
        fclose(ap);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void sumypro(FILE *ap1){
    char cad[30];
    int i = 0;
    float sum = 0.0, r;
    while(!feof(ap1)){
        fgets(cad, 30, ap1);
        r = atof(cad);
        if(r){
            i++;
            sum += r;
        }
    }
    printf("\n Suma: %.2f \n", sum);
    if(i){
        printf(" Promedio: %.2f \n", sum/i);
    }
}