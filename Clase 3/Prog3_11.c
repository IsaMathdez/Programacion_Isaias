// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.11
Calificaciones de un examen*/

int main(){

    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0; //Contadores de los rangos
    float cal;
    printf("Ingresa la calificacion del alumno: \n"); //Obtener la califiacion
    scanf("%f", &cal);
    while(cal != -1){ //Mientras no sea -1 se procede a clasificarlas
        if(cal < 4){
            r1++; //Contadores aumentan si se cumple el if
        } else if(cal < 6){
            r2++;
        } else if(cal < 8){
            r3++;
        } else if(cal < 9){
            r4++;
        } else {
            r5++;
        }
        printf("Ingresa la calificacion: \n"); //Obtener siguente calificacion
        scanf("%f", &cal);
    }
    printf("0 .. 3.99 = %d \n", r1); //Imprime los resultados
    printf("4 .. 5.99 = %d \n", r2);
    printf("6 .. 7.99 = %d \n", r3);
    printf("8 .. 8.99 = %d \n", r4);
    printf("9 .. 10 = %d \n", r5);

}