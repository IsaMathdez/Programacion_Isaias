// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.17
Encuentra los numeros perfectos entre 1 y el numero dado*/

int main(){

    int i, j, num, sum, c = 0; //Declarar variables
    printf("Ingrese el numero limite: \n"); //Recibir el nunmero
    scanf("%d", &num);
    for(i = 1; i <= num; i++){ //Para todos los numeros entre 1 y N
        sum = 0;
        for(j = 1; j <= (i/2); j++){ //Mecanismo de detencion
            if ((i%j)==0){
                sum += j;
            }
        }
        if(sum == i){
            printf("%d es un numero perfecto \n", i); //Imprimir numero perfecto si es encontrado
            c++;
        }
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos.", num, c); //Imprimir conclusion final

}