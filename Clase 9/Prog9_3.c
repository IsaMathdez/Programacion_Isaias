// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.3
Archivos y cadena de caracteres */

int main(){

    char cad[50];
    int res;
    FILE *ar;
    if((ar = fopen("arc3.txt", "w")) != NULL){
        printf("Desea ingresar una cadena de caracteres?  Si - 1  No - 0 \n");
        scanf("%d", &res);
        while(res){
            fflush(stdin);
            printf("Ingrese la cadena: \n");
            gets(cad);
            fputs(cad, ar);
            printf("Desea ingresar otra cadena? Si - 1  No - 0 \n");
            scanf("%d", &res);
            if(res){
                fputs("\n", ar);
            }
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
    
}