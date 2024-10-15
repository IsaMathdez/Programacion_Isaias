// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.7
Arreglo sin elementos repetidos*/

void lectura(int *, int);
void imprime(int *, int);
void elimina(int *, int *);

int main(){

    int tam, arre[100];
    do{
        printf("INgrese el tamaño del arreglo: \n");
        scanf("%d", &tam);
    } while (tam > 100 || tam < 1);
    lectura(arre, tam);
    elimina(arre, &tam);
    imprime(arre, tam);

}

void lectura(int a[], int t){
    printf("\n");
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

void elimina(int a[], int *t){
    int i = 0, k, l;
    while(i < (*t-1)){
        k = i+1;
        while(k <= (*t-1)){
            if(a[i] == a[k]){
                for ( l = k; l < (*t-1); l++){
                    a[l] = a[l+1];
                }
                *t = *t-1;
            } else {
                k++;
            }
        }
        i++;
    }
}