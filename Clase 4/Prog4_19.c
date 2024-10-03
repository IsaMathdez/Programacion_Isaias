// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.19
Funciones y parametros*/

int a, b, c, d;
void f1(int, int *, int *);
int f2(int *, int);

int main(){

    int a;
    a = 1; b = 2; c = 3; d = 4;
    printf("%d %d %d %d \n", a, b, c, d);
    a = f2(&a, c);
    printf("%d %d %d %d \n", a, b, c, d);

}

void f1(int r, int *b, int *c){
    int d;
    a = *c;
    d = a + 3 + *b;
    if(r){
        *b = *b + 2;
        *c = *c + 3;
        printf("%d %d %d %d \n", a, *b, *c, d);
    } else {
        *b = *b + 5;
        *c = *c + 4;
        printf("%d %d %d %d \n", a, *b, *c, d);
    }
}

int f2(int *d, int c){
    int b;
    a = 1; b = 7;
    f1(-1, d, &b);

    printf("%d %d %d %d \n", a, b, c, *d);
    c += 3;
    (*d) += 2;
    printf("%d %d %d %d \n", a, b, c, *d);
    return c;
}