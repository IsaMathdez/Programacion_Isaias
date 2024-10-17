// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 7.1
Manejo de caracteres*/

int main(){

    char p1, p2, p3 = '$';
    printf("Ingrese un caracter \n");
    p1 = getchar();
    putchar(p1);
    printf("\n");
    fflush(stdin);
    printf("EL caracter p3 es: \n");
    putchar(p3);
    printf("\n");
    printf("Ingrese otro caracter: \n");
    fflush(stdin);
    scanf("%c", &p2);
    printf("El caracter es: %c \n", p2);

}