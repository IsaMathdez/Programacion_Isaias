// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.1
Diagonal de una matriz*/

const int tam = 10;
void lectura(int [][tam], int);
void imprime(int [][tam], int);

int main(){

    int mat[tam][tam];
    lectura(mat, tam);
    imprime(mat, tam);

}

void lectura(int a[][tam], int f){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < f; j++){
            printf("Ingrese el elemento %d %d: \n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void imprime(int a[][tam], int f){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < f; j++){
            if(i == j){
                printf("Diagonal %d %d: %d \n", i, j, a[i][j]);
            }
        }
    }
}