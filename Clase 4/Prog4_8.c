// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.8
Combinacion de variables y parametros*/

int a, b, c, d;
void f1(int *, int *);
int f2(int, int *);

int main(){

    int a;
    a = 1; b =2; c = 3; d = 4;
    printf("%d %d %d %d \n", a, b, c, d);
    f1(&b, &c);
    printf("%d %d %d %d \n", a, b, c, d);
    a = f2(c, &d);
    printf("%d %d %d %d \n", a, b, c, d);

}

void f1(int *b, int *c){
    int d;
    a = 5; d = 3; (*b)++; (*c) += 2;
    printf("%d %d %d %d \n", a, *b, *c, d);
}

int f2(int c, int *d){
    int b;
    a++; b = 7; c += 3; (*d) += 2;
    printf("%d %d %d %d \n", a, b, c, *d);
    return c;
}