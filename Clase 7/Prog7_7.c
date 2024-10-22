// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 7.7
Otras funciones de stringas*/

int main(){

    int i;
    char cad0[20] = "Hola Mexico";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola Mexico";
    char *c, c3;

    i = strcmp(cad0, cad1);
    printf("Resultado de la comparacion cad0 y cad1: %d \n", i);
    i = strcmp(cad0, cad2);
    printf("Resultado de la comparacion cad0 y cad2: %d \n", i);
    i = strcmp(cad0, cad3);
    printf("Resultado de la comparacion cad0 y cad3: %d \n", i);
    i = strlen(cad0);
    printf("Longitud de cad0: %d \n", i);
    i = strlen(cad1);
    printf("Longitud de cad1: %d \n", i);
    c = strchr(cad1, 'G');
    if(c != NULL){
        c3 = *c;
        printf("El valor de c3 es: %c \n", c3);
    }
    c = strchr(cad2, 'V');
    if(c != NULL){
        c3 = *c;
        printf("El valor de c3 es: %c \n", c3);
    }

}