// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.3
Universidad y matrices tridimensionales*/

const int f = 8, c = 2, p = 5;
void lectura(int [][c][p], int, int, int);
void Funcion1(int [][c][p], int, int, int);
void Funcion2(int [][c][p], int, int, int);
void Funcion3(int [][c][p], int, int, int);

int main(){

    int uni[f][c][p];
    lectura(uni, f, c, p);
    Funcion1(uni, f, c, p);
    Funcion2(uni, f, c, p);
    Funcion3(uni, 6, c, p);

}

void lectura(int a[][c][p], int fi, int co, int pr){
    int i, j, k;
    for (k = 0; k < pr; k++){
        for(i = 0; i < fi; i++){
            for(j = 0; j < co; j++){
                printf("Año: %d  Carrera: %d  Semestre: %d \n", k+1, i-1, j+1);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

void Funcion1(int a[][c][p], int fi, int co, int pr){
    int i, j, k, may = 0, ao = -1, sum;
    for (k = 0; k < pr; k++){
        sum = 0;
        for(i = 0; i < fi; i++){
            for(j = 0; j < co; j++){
                sum += a[i][j][k];
            }
            if (sum > may){
                may = sum;
                ao = k;
            }
        }
    }
    printf("Año con mayor ingreso de alumnos: %d    alumnos: %d \n", ao+1, may);
}

void Funcion2(int a[][c][p], int fi, int co, int pr){
    int i, j, may = 0, car = -1, sum;
        for(i = 0; i < fi; i++){
            sum = 0;
            for(j = 0; j < co; j++){
                sum += a[i][j][pr - 1];
            }
            if (sum > may){
                may = sum;
                car = i;
            }
        }
    printf("Carrera con mayor numero de alumnos: %d    alumnos: %d \n", car+1, may);
}

void Funcion3(int a[][c][p], int fi, int co, int pr){
    int j, k, may = 0, ao = -1, sum;
    for (k = 0; k < pr; k++){
        sum = 0;
            for(j = 0; j < co; j++){
                sum += a[fi - 1][j][k];
            }
            if (sum > may){
                may = sum;
                ao = k;
            }
    }
    printf("Año con mayor ingreso de alumnos: %d    alumnos: %d \n", ao+1, may);
}