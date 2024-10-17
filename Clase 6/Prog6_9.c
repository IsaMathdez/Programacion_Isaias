// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.9
Asigna*/

void lectura(int [][10], int);
void calcula(int [][10], float [], int);
float mod0(int [][10], int, int);
float mod1(int [][10], int);
float mod2(int [][10], int, int);
void imprime(float [10], int);

int main(){

    int mat[10][10], tam;
    float vec[10];
    do
    {
        printf("Ingrese el tamaño de la matriz: \n");
        scanf("%d", &tam);
    } while (tam > 10 || tam < 1);
    lectura(mat, tam);
    calcula(mat, vec, tam);
    imprime(vec, tam);

}

void lectura(int a[][10], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Ingrese el elemento %d %d: \n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void calcula(int a[][10], float b[], int n){
    int i;
    for (i = 0; i < n; i++){
        switch (i % 3){
        case 1: b[i] = mod1(a,i);
            break;
        
        case 2: b[i] = mod2(a, i, n);
            break;

        default: b[i] = mod0(a, i, n);
            break;
        }
    }
}

float mod0(int a[][10], int k, int m){
    int i;
    float pro = 1.0, sum = 0.0;
    for (i = 0; i < m; i++){
        pro *= a[i][k];
        sum += a[i][k];
    }
    return pro/sum;
}

float mod1(int a[][10], int n){
    int i;
    float sum = 0.0;
    for (i = 0; i < n; i++){
        sum += a[n][i];
    }
    return sum;
}

float mod2(int a[][10], int n, int m){
    int i;
    float pro = 1.0;
    for (i = n; i < m; i++){
        pro *= a[i][n];
    }
    return pro;
}

void imprime(float b[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("Elemento: %d: %.2f \n", i, b[i]);
    }
}