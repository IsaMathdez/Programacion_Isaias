// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.17
Apuntadores y arreglos*/

int main(){

    int v1[4] = {1, 3, 5, 7}, v2[4] = {2, 4};
    int *ax, *ay;
    ax = &v1[2];
    ay = &v2[2];
    v2[2] = *(ax+1);
    v2[3] = *ax;
    ax = ax + 1;
    v1[0] = *ax;
    printf("v1[0] = %d  v1[1] = %d  v1[2] = %d  v1[3] = %d \n v2[0] = %d  v2[1] = %d  v2[2] = %d  v2[3] = %d \n", v1[0], v1[1], v1[2], v1[3], v2[0], v2[1], v2[2], v2[3]);
    v1[2] = *ay;
    v1[1] = --*ay;
    ax = ax + 1;
    v1[3] = *ax;
    printf("v1[0] = %d  v1[1] = %d  v1[2] = %d  v1[3] = %d \n v2[0] = %d  v2[1] = %d  v2[2] = %d  v2[3] = %d \n", v1[0], v1[1], v1[2], v1[3], v2[0], v2[1], v2[2], v2[3]);

}