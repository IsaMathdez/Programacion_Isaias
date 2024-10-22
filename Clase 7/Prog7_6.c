// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 7.6
Funciones de string.h */

int main(){

    char *cad0 = "Hola Mexico";
    char cad1[20], cad2[20], cad3[20] = ", Buenos dias !!!";
    strcpy(cad1, cad0);
    printf("Prueba de la funcion strcpy. Se copia la cadena cad0 a cad1: %s \n", cad1);
    strcpy(cad1, cad3);
    printf("Prueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s \n", cad1);
    strcpy(cad1, "XX");
    printf("Prueba de la funcion strcpy. Se copia la cadena XX a cad1: %s \n", cad1);
    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("Prueba de la funcion strncpy. Se copian 4 caracteres de cad0 a cad2: %s \n", cad2);
    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("Prueba de la funcion strncpy. Se copian 3 caracteres de cad3 a cad2: %s \n", cad2);
    strcat(cad0, cad3);
    printf("Prueba de la funcion strcat. Se incorpora cad3 a cad0: %s \n", cad0);
    strcat(cad1, "YY");
    printf("Prueba de la funcion strcat. Se incorpora YY a cad1: %s \n", cad1);
    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("Prueba de la funcion strncat. Se incorporan 4 caracteres de cad0 a cad2: %s \n", cad2);
    cad0 = strstr(cad0, "Mexico");
    printf("Prueba de la funcion strstr. Se trata de localizar la cadena Mexico dentro de cad0: %s \n", cad0);
    cad0 = strstr(cad0, "GUatemala");
    printf("Prueba de la funcion strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s \n", cad0);    

}