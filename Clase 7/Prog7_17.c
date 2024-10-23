// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 7.17
Cadena invertida */

char *inverso(char *);

int main(){

    char fra[50], aux[50];
    printf("Ingresa la linea de texto \n");
    gets(fra);
    strcpy(aux, inverso(fra));
    printf("Escrita la linea de texto de forma inversa: \n");
    puts(aux);

}

char * inverso(char *cad){
    int i = 0, j, lon;
    char Cad;
    lon = strlen(cad);
    j = lon-1;
    while(i < ((lon-1)/2)){
        Cad = cad[i];
        cad[i] = cad[j];
        cad[j] = Cad;
        i++;
        j--;
    }
    return cad;
}