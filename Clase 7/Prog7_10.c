// Programa hecho por Isaias Matos
#include <stdio.h>
#include <stdlib.h>

/* Programa 7.10
Suma y promedio */

int main(){

    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    printf("Desea ingresar una cadena de caracteres S/N? \n");
    c = getchar();
    while(c == 's'){
        printf("Ingrese la cadena de caracteres: \n");
        fflush(stdin);
        gets(cad);
        i++;
        sum += atof(cad);
        printf("Desea ingresar otra cadena de caracteres S/N? \n");
        c = getchar();
    }
    printf("Suma: %.2f \n", sum);
    printf("Promedio: %.2f \n", sum/i);

}