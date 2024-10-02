// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.17
Promedio de lluvias*/

void mayor(float, float, float);

int main(){

    int i;
    float gol, pac, car, agol = 0, apac = 0, acar = 0;
    for (i = 1; i <= 12; i++)
    {
        printf("Ingresa las luvias del mes %d: \n", i);
        printf("Regiones Golfo, Pacifico y Caribe \n");
        scanf("%f %f %f", &gol, &pac, &car);
        agol += gol;
        apac += pac;
        acar += car;
    }
    printf("Promedio de lluvias region Golfo: %6.2f \n", agol/12);
    printf("Promedio de lluvias region Pacifico: %6.2f \n", apac/12);
    printf("Promedio de lluvias region Caribe: %6.2f \n", acar/12);
    mayor(agol, apac, acar);

}

void mayor(float r1, float r2, float r3){
    if(r1 > r2){
        if(r1 > r3){
            printf("Region con mayor promedio: Golfo. Prom: %6.2f \n", r1/12);
        } else {
            printf("Region con mayor promedio: Caribe. Prom: %6.2f \n", r3/12);
        }
    } else if (r2 > r3){
        printf("Region con mayor promedio: Pacifico. Prom: %6.2f \n", r2/12);
    } else {
        printf("Region con mayor promedio: Caribe. Prom: %6.2f \n", r3/12);
    }
}