// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 2.12
Igualdad de expresiones */

int main(){

    int t, p, n;
    printf("Ingresa los valores de T, P y N \n");
    scanf("%d %d %d", &t, &p, &n);
    if (p != 0){
        if ( pow(t/p,n) == (pow(t,n)/pow(p,n)) ) {
            printf("Se comprueba la igualdad");
        } else {
            printf("No se comprueba la igualdad");
        }
    } else {
        printf("P no puede ser 0");
    }

}