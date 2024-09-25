// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.6
Nomina de profesores y promedio*/

int main(){

    int i = 0;
    float sal, pro, nom = 0; //Variables de salario y promedio
    printf("Ingrese el salario del profesor \t");
    scanf("%f", &sal); //Obtener salario
    do{ //Ejecuta y repite mientras el salario no sea 0
        nom += sal; //Suma los salarios
        i++; //Cuenta cantidad de salarios
        printf("Ingrese el salario siguiente: \t"); //Pide el siguiente
        scanf("%f", &sal);
    } while (sal);
    pro = nom/i; //saca promedio
    printf("Nomina: %.2f \t Promedio de salarios: %.2f", nom, pro); //IMprime resultados

}