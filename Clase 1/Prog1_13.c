
#include <stdio.h>

/* Programa 1.13
Aplicacion de operadores*/

int main(){

    int i = 5, j = 4, k, l, m;

    k = !i * 3 + --j * 2 - 3;
    printf("El valor de k es %d \n", k);

    l = ! (!i || 1 && 0) && 1;
    printf("El valor de l es %d \n", l);

    m = (k = (!(12>10)), j = (10||0) && k, (!(k || j)));
    printf("El valor de m es %d \n", m);
}