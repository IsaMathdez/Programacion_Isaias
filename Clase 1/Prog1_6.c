
#include <stdio.h>

/* Programa 1.6
APlicacion de operadores*/

int main(){

    int i = 15, j, k, l;

    j = (15 > i--) > (14 < ++i);
    printf("El valor de j es: %d \n", j);

    k = (!('b' != 'd')) > (!i-1);
    printf("El valor de k es: %d \n", k);

    l = (!(34>(70%2)) || 0);
    printf("El valor de l es: %d \n", l);
}