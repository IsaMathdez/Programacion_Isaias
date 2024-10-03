// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.21
Mas funciones y parametros*/

int z, y;
int f1(float);
void f2(float, int *);

int main(){

    int w;
    float x;
    z = 5; y = 7; w = 2;
    x = (float)y / z;
    printf("Programa pricipal: %d %d %.2f %d \n", z, y, x, w);
    f2(x, &w);
    printf("Programa pricipal: %d %d %.2f %d \n", z, y, x, w);
}

int f1(float x){
    int k;
    if(x != 0){
        k = z - y;
        x++;
    } else {
        k = z + y;
    }
    printf("F1: %d %d %.2f %d \n", z, y, x, k);
    return k;
}

void f2(float t, int *r){
    int y;
    y = 5; z = 0;
    printf("F2: %d %d %.2f %d \n", z, y, t, *r);
    if(z == 0){
        z = (*r)*2;
        t = (float)z / 3;
        printf("Ingresa valor: \n");
        scanf("%d", r);
        printf("F2: %d %d %.2f %d \n", z, y, t, *r);
    } else {
        z = (*r)*2;
        printf("F2: %d %d %.2f %d \n", z, y, t, *r);
    }
    *r = f1(t);
}