// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.15
Apuntadores y arreglos*/

int main(){

    int x = 5, y = 8, v[5] = {1, 3, 5, 7, 9};
    int *ay, *ax;
    ay = &y;
    x = *ay;
    *ay = v[3] + v[2];
    printf("X = %d   y = %d   V[0] = %d  V[1] = %d  V[2] = %d  V[3] = %d  V[4] = %d \n", x, y, v[0], v[1], v[2], v[3], v[4]);
    ax = &v[v[0]*v[1]];
    x = *ax;
    y = *ax * v[1];
    *ax = *ay - 3;
    printf("X = %d   y = %d   V[0] = %d  V[1] = %d  V[2] = %d  V[3] = %d  V[4] = %d \n", x, y, v[0], v[1], v[2], v[3], v[4]);

}