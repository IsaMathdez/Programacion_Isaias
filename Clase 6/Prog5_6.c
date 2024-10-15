// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 4.2
Suma cuadrados*/

const int max = 100;
void lectura(float *, int);
double suma(float *, int);

int main(){

    float vec[max];
    double res;
    lectura(vec, max);
    res = suma(vec, max);
    printf("Suma del arreglo: %.2lf \n", res);
    return 0;

}

void lectura(float a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Ingrese el elemento %d: \n", i+1);
        scanf("%f", &a[i]);
    }
}

double suma(float a[], int t){
    int i;
    double aux = 0.0;
    for (i = 0; i < t; i++){
        aux += pow(a[i], 2);
    }
    return aux;
}