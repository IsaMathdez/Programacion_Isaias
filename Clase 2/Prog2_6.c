// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.6
Incremento de salario: al recibir el nivel de un profesor incrementa su salario*/

int main(){

    float sal;
    int niv;
    printf("Ingrese el nivel academico del profesor \n");
    scanf("%d", &niv);
    printf("Ingrese el salario \n");
    scanf("%f", &sal);
    switch (niv){
    case 1:
        sal = sal * 1.0035;
        break;
    case 2:
        sal = sal * 1.0041;
        break;

    case 3:
        sal = sal * 1.0048;
        break;

    case 4:
        sal = sal * 1.0053;
        break;

    default:
        break;
    }
    printf("Nivel: %d \t Nuevo salario: %8.2f", niv, sal);

}