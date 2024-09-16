// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.11
Billete de ferrocarril*/

int main(){

    int dis, tie;
    float bil;
    printf("Ingresa la distancia entre las dos ciudades y el tiempo de estancia \n");
    scanf("%d %d", &dis, &tie);
    if ( (dis*2 > 500) && (tie < 10) ){
        bil = dis * 2 * 0.19 * 0.8;
    } else {
        bil = dis * 2 * 0.19;
    }
    printf("Costo del billete: %7.2f", bil);

}