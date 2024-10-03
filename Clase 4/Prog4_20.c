// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.20
Mas funciones y paarmetros*/

int f1(int, int *);
int a = 3;
int b = 7;
int c = 4;
int d = 2;

int main(){

    a = f1(c, &d);
    printf("%d %d %d %d \n", a, b, c, d);
    c = 3;
    c = f1(a, &c);
    printf("%d %d %d %d \n", a, b, c, d);

}

int f1(int x, int *y){
    int a;
    a = x * (*y);
    c++;
    b += *y;
    printf("%d %d %d %d \n", a, b, c, d);
    y--;
    return c;
}