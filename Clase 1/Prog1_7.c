
#include <stdio.h>

/* Programa 1.7
Medidas, convierte pies y libras a metros y kilogramos*/

int main(){

    float pie, lib, met, kil;
    printf("Ingrese los datos pies y libras: \n");
    scanf("%f %f", &pie, &lib);
    met = pie * 0.9290;
    kil = lib * 0.45359;
    printf("Datos del objeto: \nLOngitud: %5.2f \t Peso %5.2f", met, kil);

}