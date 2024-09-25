// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.8
Factorial de un numero*/

int main(){

    int i, num;
    long fac; //Variable que almacenara el procedimiento
    printf("INgrese el numero: \t"); //obtener el numero
    scanf("%d", &num);
    if(num >= 0){ //Verificar si cumple
        fac = 1;
        for(i = 1; i <= num; i++){ //Multiplica todos los factores desde 1 hasta N
            fac *= i;
        }
        printf("El factorial de %d es: %ld", num, fac); //Imprime resltado
    } else {
        printf("Error en el numero ingresado"); //Si el numero dado no cumple
    }

}