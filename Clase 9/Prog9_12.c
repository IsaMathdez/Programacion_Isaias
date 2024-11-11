// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.12
Agrega caracteres al archivo */

int main(){

    char p1;
    FILE *ar;
    if((ar = fopen("libro.txt", "a")) != NULL){
        while((p1 = getchar()) != '\n'){
            fputc(p1, ar);
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }

}