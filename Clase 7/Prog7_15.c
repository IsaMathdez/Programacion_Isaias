// Programa hecho por Isaias Matos
#include <stdio.h>
#include <ctype.h>

/* Programa 7.15
Decodifica */

void interpreta(char *);

int main(){

    char cad[50];
    printf("Ingresa la cadena de caracteres: \n");
    gets(cad);
    interpreta(cad);

}

void interpreta(char *cadena){
    int i = 0, j, k;
    while(cadena[i] != '\0'){
        if(isalpha(cadena[i])){
            k = cadena[i - 1] - 48;
            for (j = 0; j < k; j++){
                putchar(cadena[i]);
            }
        }
    }
    i++;
}