// Programa hecho por Isaias Matos
#include <stdio.h>
#include <stdlib.h>

/* Programa 7.5
Funciones para el manejo de caracteres*/

int main(){

    int i;
    double d;
    long l;
    char cad0[20], *cad1;
    printf("Ingresa una cadena de caracteres \n");
    gets(cad0);
    i = atoi(cad0);
    printf("%s \t %d \n", cad0, i+3);
    printf("INgrese una cadena de caracteres \n");
    gets(cad0);
    d = atof(cad0);
    printf("%s \t %.2lf \n", cad0, d+1.50);
    d = strtod(cad0, &cad1);
    printf("%s \t %2lf \n", cad0, d+1.50);
    puts(cad1);
    l = atol(cad0);
    printf("%s \t %ld \n", cad0, l+10);
    l = strtol(cad0, &cad1, 0);
    printf("%s \t %ld \n", cad0, l+10);
    puts(cad1);

}