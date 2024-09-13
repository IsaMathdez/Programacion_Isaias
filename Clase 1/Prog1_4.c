
#include <stdio.h>

/* Programa 1.4
Superficie de un triangulo*/

int main(){

    float bas, alt, A;
    printf("Ingresa la base y la altura \n");
    scanf("%f %f", &bas, &alt);
    A = (bas*alt)/2;
    printf("El area es %5.2f", A);

}