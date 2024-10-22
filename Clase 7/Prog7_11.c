// Programa hecho por Isaias Matos
#include <stdio.h>
#include <ctype.h>

/* Programa 7.11
Verificar letra minuscula */

int main(){

    char p, cad[50];
    int n;
    printf("Ingrese la cadena de carteres max 50: \n");
    gets(cad);
    printf("Ingrese la posicion que desea verificar: \n");
    scanf("%d", &n);
    if((n >= 0)&&(n <= 50)){
        p = cad[n-1];
        if(islower(p)){
            printf("%c es una letra minuscula \n", p);
        } else {
            printf("%c NO es una letra minuscula \n", p);
        }
    } else {
        printf("El valor ingresado es incorrecto \n");
    }

}