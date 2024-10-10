// Programa hecho por Isaias Matos
#include <stdio.h>

/* Jugeteo personal con los punteros*/

int main(){

    int a = 4;
    int b = 5;
    float c = 2.3;
    float d = 7.7;
    int *p;
    float *q;
    p = &a;
    printf("Valor de A: %d \n", *p);
    printf("Direccion de A: %p \n", p);
    printf(" A: %d \n", a);
    p = &b;
    printf("Valor de B: %d \n", *p);
    printf("Direccion de B: %p \n", p);
    printf(" B: %d \n", b);
    q = &c;
    printf("Valor de C: %.3f \n", *q);
    printf("Direccion de C: %p \n", q);
    printf(" C: %.3f \n", c);
    q = &d;
    printf("Valor de D: %.3f \n", *q);
    printf("Direccion de D: %p \n", q);
    printf(" D: %.3f \n", c);

}