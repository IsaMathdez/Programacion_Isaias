
#include <stdio.h>
#include <math.h>

/* Programa 1.8
Volumen y area del cilindro*/

int main(){

    float rad, alt, vol, area;
    printf("Ingresa el radio y altura: \n");
    scanf("%f %f", &rad, &alt);
    vol = M_PI * pow(rad,2) * alt;
    area = 2 * M_PI * rad * alt;
    printf("El vlumen es: %6.2f \t El area es: %6.2f ", vol, area);

}