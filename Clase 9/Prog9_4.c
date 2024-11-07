// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.1
Archivos y cadenas de caracteres Leer*/

int main(){

    char cad[50];
    FILE *ap;
    if((ap = fopen("arc3.txt", "r")) != NULL){
        while(!feof(ap)){
            fgets(cad, 50, ap);
            puts(cad);
        }
        fclose(ap);
    } else {
        printf("No se puede abrir el archivo");
    }
    
}