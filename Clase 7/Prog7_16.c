// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 7.16
Cuenta cadenas*/

int main(){

    char cad1[50], cad2[50], *cad0 = "";
    int i = 0;
    printf("INgrese la primera cadena de caracteres: \n");
    gets(cad1);
    printf("INgrese la cadena a buscar : \n");
    gets(cad2);
    strcpy(cad0, cad1);
    cad0 = strstr(cad0, cad2);
    while(cad0 != NULL){
        i++;
        cad0 = strstr(cad0 + 1, cad2);
    }
    printf("El numero de veces que aparece la segunda cadena es: %d \n", i);

}