// Programa hecho por Isaias Matos
#include <stdio.h>
#include <ctype.h>

/* Programa 9.15
Letras con funciones */

void minymay(FILE *);

int main(){

    FILE *ap;
    if((ap = fopen("libro.txt", "r")) != NULL){
        minymay(ap);
        fclose(ap);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void minymay(FILE *ap1){
    int i, mi = 0, ma = 0;
    char cad[30];
    while(!feof(ap1)){
        fgets(cad, 30, ap1);
        i = 0;
        while(cad[i] != '\0'){
            if(islower(cad[i])){
                mi++;
            } else if(isupper(cad[i])){
                ma++;
            }
        }
    }
    printf("\n NUmero de minusculas: %d \n", mi);
    printf(" NUmero de mayusculas: %d \n", ma);

}