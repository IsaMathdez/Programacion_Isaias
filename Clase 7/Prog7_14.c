// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 7.14
Calcular longitud en forma recursiva*/

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
    if(cad[0] == '\0'){
        return 0;
    } else {
        return(1 + cuenta(&cad[1]));
    }
}