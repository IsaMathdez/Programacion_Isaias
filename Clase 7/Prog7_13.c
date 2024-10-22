// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 7.13
Longitud cadena */

int cuenta(char *);

int main(){

    int i;
    char cad[50];
    printf("Ingrese la cadena de caracteres: \n");
    gets(cad);
    i = cuenta(cad);
    printf("Longitud de la cadena: %d \n", i);

}

int cuenta(char *cad){
    int c = 0;
    while(!cad[c] == '\0'){
        c++;
    }
    return c;
}