// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 7.18
Cadena invertida con recursiva */

void inverso(char *);

int main(){

    char fra[50];
    printf("Ingresa la linea de texto \n");
    gets(fra);
    printf("Escrita la linea de texto de forma inversa: \n");
    inverso(fra);

}

void inverso(char *cad){
    if(cad[0] != '\0'){
        inverso(&cad[1]);
        putchar(cad[0]);
    }
}