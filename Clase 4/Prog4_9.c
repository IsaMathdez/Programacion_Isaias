// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.9
Paso de una funcion como parametro*/

int suma(int x, int y){
    return (x + y);
}

int resta(int x, int y){
    return(x - y);
}

int control(int (*apf) (int, int), int x, int y){
    int res;
    res = (*apf)(x,y);
    return res;
}

int main(){

    int r1, r2;
    r1 = control(suma, 15, 5);
    r2 = control(resta, 10, 4);
    printf("Resultado 1: %d \n", r1);
    printf("Resultado 2: %d \n", r2);

}