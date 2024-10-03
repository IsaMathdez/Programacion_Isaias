// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa Consumo de gasolina
Entrada: Consumo min y max, precio galon*/

int main(){

    float precioG = 0.0, precioL = 0.0;
    int i = 0, minC = 0, maxC = 0; 
    do{
        printf("Ingresa los valores de consumo minimo y maximo en litros/100km: \n");
        scanf("%d %d", &minC, &maxC);
        printf("Ingresa el costo por galon de gasolina: \n");
        scanf("%f", &precioG);
        if(minC > maxC){
            printf("El valor minimo debe ser menor que el mayor. \n");
        } else if(minC == maxC){
            printf("Los valores deben ser distintos \n");
        } else if(precioG <= 0){
            printf("El costo del galon debe ser mayor de 0 \n");
        } 
    } while (minC > maxC || minC == maxC || precioG <= 0);

    precioL = precioG * 0.264172;
    for(i = minC; i <= maxC; i++){

        printf("El precio del kilometro con un consumo de %.2f L/km es de: %.2f \n", (float)i/100, (float)i/100 * precioL);
    }

}