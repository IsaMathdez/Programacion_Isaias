// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Programa 7.19
Cuenta palabras */

int cuentap(char *);

int main(){

    int i;
    char fra[50];
    printf("Ingresa la linea de texto: \n");
    gets(fra);
    strcat(fra, " ");
    i = cuentap(fra);
    printf("La linea de texto tiene %d palabras. \n", i);

}

int cuentap(char *cad){
    char *cad0 = "";
    int i = 0;
    cad0 =strstr(cad, " ");
    while(strcmp(cad, " ")){
        strcpy(cad, cad0);
        i++;
        cad0 = strstr(cad + 1, " ");
    }
    return i;
}