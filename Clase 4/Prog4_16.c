// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 4.16
Temperaturas de 24 horas*/

void acutem(float);
void maxima(float, int);
void minima(float, int);
float act = 0.0, max = -50.0, min = 60.0;
int hmax, hmin;

int main(){

    float tem;
    int i;
    for (i = 1; i <= 24; i++)
    {
        printf("Ingresa la temperatura de la hora %d: \n", i);
        scanf("%f", &tem);
        acutem(tem);
        maxima(tem, i);
        minima(tem, i);
    }
    printf("Promedio del dia: %5.2f \n", (act/24));
    printf("Maxima del dia: %5.2f \t Hora: %d \n", max, hmax);
    printf("Minima del dia: %5.2f \t Hora: %d \n", min, hmin);

}

void acutem(float t){
    act += t;
}

void maxima(float t, int h){
    if(max < t){
        max = t;
        hmax = h;
    }
}

void minima(float t, int h){
    if(min > t){
        min = t;
        hmin = h;
    }
}