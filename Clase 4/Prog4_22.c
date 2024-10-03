// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.22
Funciones y parametros*/

int a, b, c, d;
int pal(int, int);

int main(){

    a = 2; c = 3; d = 5; a = pal(c, d);
    printf("%d %d %d %d \n", a, b, c, d);
    b = 4;
    b = pal(b, a);
    printf("%d %d %d %d \n", a, b, c, d);

}

int pal(int x, int y){
    int c;
    b = x * y;
    c = b + y;
    x++;
    y = y * (y + 1);
    printf("%d %d %d %d \n", a, b, c, d);
    return x;
}