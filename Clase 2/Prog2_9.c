// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 2.9
Recibe 3 datos y verifica si cumple la expresion */

int main(){

    int r, t, q;
    float res;
    printf("Ingrese tres valores: \n");
    scanf("%d %d %d", &r, &t, &q);
    res = pow(r,4) - pow(t,3) + 4*pow(q,2);
    if (res < 820){
        printf("R = %d \t T = %d \t Q = %d", r, t, q);
    }
}