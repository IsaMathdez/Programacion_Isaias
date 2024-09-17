// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 2.13
Funcion segun X dentro de varios rangos*/

int main(){

    float x;
    int y;
    printf("Ingrese el valor de Y \n");
    scanf("%d", &y);
    if (y < 0 || y > 50){
        x = 0;
    } else {
        if (y <= 10){
            x = 4/y - y;
        } else if (y <= 25){
            x = pow(y,3) - 12;
        } else {
            x = pow(y,2) + (pow(y,3) - 18);
        }
    }
    printf("Y = %d \t X = %8.2f ", y, x);

}