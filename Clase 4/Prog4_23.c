// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.23
*/

void trueque(int *x, int *y){
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x){
    return x + x;
}