// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.2
Sumar matrices*/

const int max = 50;
void lectura(int [][max], int, int);
void suma(int [][max], int [][max], int [][max], int, int);
void imprime(int [][max], int, int);


int main(){

    int ma[max][max], mb[max][max], mc[max][max];
    int fil, col;
    do{
        printf("ingresa el numero de filas: \n");
        scanf("%d", &fil);
    } while (fil > max || fil < 1);
    do{
        printf("ingresa el numero de columnas: \n");
        scanf("%d", &col);
    } while (col > max || col < 1);
    printf("Lectura del arreglo MA \n");
    lectura(ma, fil, col);
    printf("Lectura del arreglo MB \n");
    lectura(mb, fil, col);
    suma(ma, mb, mc, fil, col);
    printf("Impresion del arreglo MC: \n");
    imprime(mc, fil, col);

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

void suma(int m1[][max], int m2[][max], int m3[][max], int f, int c){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void imprime(int a[][max], int f, int c){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
            printf("Elemento %d %d: %d \n", i, j, a[i][j]);
        }
    }
}