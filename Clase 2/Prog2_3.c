// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.3
Promedio curso, con if else*/

int main(){

    float pro;
    printf("Ingresa el promedio del alumno \n");
    scanf("%f", &pro);
    if (pro >= 60)
    {
        printf("Aprobado");
    } else {
        printf("Reprobado");
    }

}