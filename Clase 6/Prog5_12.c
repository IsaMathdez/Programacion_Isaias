// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.12
Ordenacion por insercion directa*/

const int max = 100;
void lectura(int *, int);
void ordena(int *, int);
void imprime(int *, int);

int main(){

    int tam, vec[max];
    do{
        printf("INgrese el tamaño del arreglo: \n");
        scanf("%d", &tam);
    } while (tam > max || tam < 1);
    lectura(vec, tam);
    ordena(vec, tam);
    imprime(vec, tam);
}

void lectura(int a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Ingrese el elemento %d: \n", i+1);
        scanf("%d", &a[i]);
    }
}

void imprime(int a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("A[%d]: %d \n", i, a[i]);
    }
}

void ordena(int a[], int t){
    int i, l, aux;
    for (i = 1; i < t; i++){
        aux = a[i];
        l = i - 1;
        while((l >= 0)&&(aux < a[l])){
            a[l+1] = a[l];
            l--;
        }
        a[l+1] = aux;
    }
}