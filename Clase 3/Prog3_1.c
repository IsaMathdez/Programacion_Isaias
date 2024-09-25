// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.1
Nomina*/

int main(){

    int I; //Indexador
    float sal, nom; //Salario y nomina
    nom = 0;
    for (I = 1; I <= 15; I++) //Repetir 15 veecs
    {
        printf("Ingrese el salario del profesor %d \t", I); //Obtener los 15 salarios
        scanf("%f", &sal);
        nom = nom + sal; //Sumar los salarios
    }
    printf("\nEl total de la nomina es %.2f", nom); //MOstrar resultados

}