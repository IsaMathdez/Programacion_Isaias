// Programa hecho por Isaias Matos
#include <stdio.h>
#include <ctype.h>

/* Programa 9.14
Cuenta Letras minusculas y mayusculas */

void minymay(FILE *);

int main(){

    char p;
    FILE *ar;
    if((ar = fopen("libro.txt", "r")) != NULL){
        minymay(ar);
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void minymay(FILE *arc){
    int min = 0, may = 0;
    char p;
    while(!feof(arc)){
        p = fgetc(arc);
        if(islower(p)){
            min++;
        } else if(isupper(p)){
            may++;
        }
    }
    printf("\n NUmero de minusculas: %d \n", min);
    printf(" NUmero de mayusculas: %d \n", may);

}