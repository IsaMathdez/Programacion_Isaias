// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.1
Archivos y caracteres */

int main(){

    char p1;
    FILE *ar;
    ar = fopen("arc.txt", "w");
    if(ar != NULL){
        printf("Ingresa el texto a guardar en el archivo \n");
        while((p1 = getchar()) != '\n'){
            fputc(p1, ar);
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
    
}