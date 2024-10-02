// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.14
Rango de calificaciones*/

void rango(int);
int ra1 = 0;
int ra2 = 0;
int ra3 = 0;
int ra4 = 0;
int ra5 = 0;

int main(){

    float cal;
    printf("Ingresa la primera calificacion: \n");
    scanf("%f", &cal);
    while(cal != -1){
        rango(cal);
        printf("Ingresa la siguiente calificacion: \n");
        scanf("%f", &cal);
    }
    printf("0 .. 3.99 = %d \n", ra1);
    printf("4 .. 5.99 = %d \n", ra2);
    printf("6 .. 7.99 = %d \n", ra3);
    printf("8 .. 8.99 = %d \n", ra4);
    printf("9 .. 10 = %d \n", ra5);

}

void rango(int val){
    if(val < 4){
        ra1++;
    } else if(val < 6){
        ra2++;
    } else if(val < 8){
        ra3++;
    } else if(val < 9){
        ra4++;
    } else {
        ra5++;
    }
}