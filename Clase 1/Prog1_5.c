
#include <stdio.h>

/* Programa 1.5
Aplicacion de operadores*/

int main(){

    int i = 5, j = 7, k = 3, m1;
    float x = 2.5, z = 1.8, t;

    m1 = ((j%k)/2)+1;
    m1 += i;
    m1 %= --i;
    printf("El valor de m1 es: %d \n", m1);

    t = ((float)(j%k)/2);
    t++;
    x *= ++z;
    t -= (x += ++i);
    printf("El valor de t es: %.2f", t);

}