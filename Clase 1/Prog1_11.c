
#include <stdio.h>
#include <math.h>

/* Programa 1.11
Perimetro del triangulo reccibiendo los puntos de las 3 vertices*/

int main(){

    float x1, y1, x2, y2, x3, y3, l1, l2, l3, P;
    printf("Ingresa coordenada del punto P1 \n");
    scanf("%f %f", &x1, &y1);
    printf("Ingresa coordenada del punto P2 \n");
    scanf("%f %f", &x2, &y2);
    printf("Ingresa coordenada del punto P3 \n");
    scanf("%f %f", &x3, &y3);
    l1 = sqrt(pow(x1-x2, 2)) + pow(y1-y2, 2);
    l2 = sqrt(pow(x2-x3, 2)) + pow(y2-y3, 2);
    l3 = sqrt(pow(x1-x3, 2)) + pow(y1-y3, 2);
    P = l1+l2+l3;
    printf("El perimetro es: %6.3f", P);

}