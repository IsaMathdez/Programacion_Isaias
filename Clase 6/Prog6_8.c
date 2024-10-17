// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.8
Traspuesta*/

const int max = 50;
void lectura(int [][max], int, int);
void traspuesta(int [][max], int [][max], int, int);
void imprime(int [][max], int, int);

int main(){

    int mat[max][max], tra[max][max];
    int fil, col;
    do{
        printf("INgrese el numero de filas de la matriz: \n");
        scanf("%d", &fil);
    } while (fil > max || fil < 1);
    do{
        printf("INgrese el numero de columnas de la matriz: \n");
        scanf("%d", &col);
    } while (col > max || col < 1);
    lectura(mat, fil, col);
    traspuesta(mat, tra, fil, col) ;
    imprime(tra, col, fil) ;

}

void lectura(int a[][max], int f, int c){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
            printf("Ingrese el elemento %d %d: \n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void traspuetsa(int m1[][max], int m2[][max], int f, int c){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
            m2[j][i] = m1[i][j];
        }
    }
}

void imprime(int a[][max], int f, int c){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
            printf("Elemento %d %d: %d \n", i+1, j+1, a[i][j]);
        }
    }
}