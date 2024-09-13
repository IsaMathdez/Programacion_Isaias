
#include <stdio.h>

/* Programa 1.12
Aplicacion de operadores*/

int main(){

    int i, j, k =2, l = 7;

    i = 9 + 3 * 2;
    j = 8 % 6 + 4 * 2;
    i %= j;
    printf("El valor de i es %d \n", i);

    ++l;
    --k -= l++ * 2;
    printf("El valor de k es %d \n", k);

    i = 5.5 - 3 * 2 % 4;
    j = (i * 2 - (k = 3, --k));
    printf("El valor de j es %d \n", j);

}