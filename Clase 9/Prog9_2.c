// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.2
Archivos y caracteres Leer */

int main(){

    char p1;
    FILE *ar;
    if((ar = fopen("arc.txt", "r")) != NULL){
        while(!feof(ar)){
            p1 = fgetc(ar);
            putchar(p1);
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
    
}