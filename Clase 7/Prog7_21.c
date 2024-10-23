// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 7.21
Intercambiar filas */

void intercambia(char fra[][30], int);

int main(){

    int i, n;
    char fra[20][30];
    printf("INgrese el numero de filas del arreglo: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("INgresa la linea %d/%d de texto: \n", i+1, n);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n\n");
    intercambia(fra, n);
    for (i = 0; i < n; i++){
        printf("Impresion de la linea de texto %d: \n", i+1);
        puts(fra[i]);
    }

}

void intercambia(char fra[][30], int n){
    int i, j;
    j = n-1;
    char cad[30];
    for (i = 0; i < n/2; i++){
        /* code */strcpy(cad, fra[i]);
        strcpy(fra[i], fra[j]);
        strcpy(fra[j], cad);
        j--;
    }
}