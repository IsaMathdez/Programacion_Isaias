// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.12
LLuvias*/

const int pro = 24;
const int mes = 12;
const int ano= 10;
void lectura(float [pro][mes][ano], int, int, int);
void funcion1(float [pro][mes][ano], int, int, int);
void funcion2(float [pro][mes][ano], int, int, int);
void funcion3(float [pro][mes][ano], int, int, int);

int main(){

    float llu[pro][mes][ano];
    lectura(llu, pro, mes, ano);
    funcion1(llu, pro, mes, ano);
    funcion2(llu, pro, mes, ano);
    funcion3(llu, pro, mes, ano);

}

void lectura(float a[][mes][ano], int f, int c, int p){
    int k, i, j;
    for (k = 0; k < p; k++){
        for (i = 0; i < f; i++){
            for (j = 0; j < c; j++){
                printf("Año %d \t Provincia %d \t Mes %d: \n", k+1, i+1, j+1);
                scanf("%f", &a[i][j][k]);
            }
        }
    }
}

void funcion1(float a[][mes][ano], int f, int c, int p){
    int i, k, j, emay = -1;
    float ellu = -1.0, sum;
    for (i = 0; i < f; i++){
        sum = 0.0;
        for (k = 0; k < p; k++){
            for (j = 0; j < c; j++){
                sum += a[i][j][k];
            }
        }
        sum /= p*c;
        if(sum > ellu){
            ellu = sum;
            emay = i;
        }
    }
    printf("Provincia con mayor registro de lluvias: %d \n", emay+1);
    printf("Registroo: %.2f \n", ellu);
}

void funcion2(float a[][mes][ano], int f, int c, int p){
    int i, j, emen;
    float ellu = 1000, sum;
    for (i = 0; i < f; i++){
        sum = 0;
        for (j = 0; j < c; j++){
            sum += a[i][j][p-1];   
        }
        sum /= c;
        if(sum < ellu){
            ellu = sum;
            emen = i;
        }
    }
    printf("Provincia con menor registro de lluvias anual en el ultimo año: %d \n", emen+1);
    printf("Registro anual: %.2f \n", ellu);
}

void funcion3(float a[][mes][ano], int f, int c, int p){
    int j, emes = -1;
    float ellu = -1.0;
    for (j = 0; j < c; j++){
        if(a[f-1][j][p-1] > ellu){
            ellu = a[f-1][j][p-1];
            emes = j;
        }
    }
    printf("Mes: %d LLuvias: %.2f \n", emes+1, ellu);
}