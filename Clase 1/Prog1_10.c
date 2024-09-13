
#include <stdio.h>
#include <math.h>

/* Programa 1.10
Area de triangulo dado sus tres lados*/

int main(){

    float l1, l2, l3, aux, area;
    printf("Ingrese los 3 lados del triangulo: \n");
    scanf("%f %f %f", &l1, &l2, &l3);
    aux = (l1+l2+l3)/2;
    area = sqrt( aux*(aux-l1)*(aux-l2)*(aux-l3) );
    printf("El area del triangulo es %6.2f", area);

}