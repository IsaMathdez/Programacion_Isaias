// Programa hecho por Isaias Matos
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* Programa 9.17
Remplaza palabras en archivo */

void cambia(FILE *, FILE *);

int main(){

    FILE *ar;
    FILE *ap;
    ar = fopen("arc.trt", "r");
    ap = fopen("arc1.txt", "w");
    if((ar != NULL) && (ap != NULL)){
        cambia(ar, ap);
        fclose(ar); fclose(ap);
    } else {
        printf("No se pueden abrir los archivos \n");
    }
}

void cambia(FILE *ap1, FILE *ap2){
    int i, j, k;
    char cad[30], *cad1 = "", *cad2 = "", aux[30];
    while(!feof(ap1)){
        cad2[0] = 'M';
        i = strlen(cad1);
        j = strlen(cad2);
        k = i - j;
        if(k){
            strncpy(aux, cad, k);
            aux[k] = '\0';
            strcat(aux, cad2);
            strcpy(cad1, aux);
        } else {
            strcpy(cad1, cad2);
        }
        cad2 = strstr(cad1, "mexico");
    }
    fputs(cad1, ap2);
}