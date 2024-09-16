// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 2.5
Funcion matematica: obtener resultado de una funcion*/

int main(){

    int op, t;
    float res;
    printf("Ingrese la opcion del calculo y el valor a calcular \n");
    scanf("%i %i", &op, &t);
    switch (op)
    {
    case 1:
        res = t/5;
        break;
    
    case 2:
        res = pow(t,t);
        break;

    case 4:
    case 3:
        res = 6 * t/2;
        break;
    
    default:
        res = 1;
        break;
    }
    printf("Resultado: %7.2f", res);

}