// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Programa 7.8
MInusculas y Mayusculas*/

void minymay(char *cad);

int main(){

    int i, n;
    char fra[20][50];
    printf("Ingrese el numero de filas del arregllo: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Ingrese la linea %d de texto: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++){
        minymay(fra[i]);
    }

}

void minymay(char *cadena){
    int i = 0, mi = 0, ma = 0;
    while(cadena[i] != '\0'){
        if(islower(cadena[i])){
            mi++;
        } else if(isupper(cadena[i])){
            ma++;
        }
    }
    printf("NUmero de letras minusculas: %d \n", mi);
    printf("NUmero de letras mayusculas: %d \n", mi);
}