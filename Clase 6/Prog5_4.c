// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.4
Producto de vectores*/

const int max = 10;
void lectura(int vec[], int t);
void imprime(int vec[], int t);
void producto(int *x, int *y, int *z, int t);

int main(){

    int v1[max], v2[max], v3[max];
    lectura(v1,max);
    lectura(v2,max);
    producto(v1, v2, v3, max);
    printf("Producto de los vectores: \n");
    imprime(v3, max);

}

void lectura(int vec[], int t){
    int i;
    printf("\n");
    for(i=0; i<t; i++){
        printf("INgrese el elemento %d: \n", i+1);
        scanf("%d", &vec[i]);
    }
}

void imprime(int vec[], int t){
    int i;
    for(i=0; i<t; i++){
        printf("Vec[%d]: %d \n", i+1, vec[i]);
    }
}

void producto(int *x, int *y, int *z, int t){
    int i;
    for(i=0; i<t; i++){
        z[i] = x[i] * y[i];
    }
}