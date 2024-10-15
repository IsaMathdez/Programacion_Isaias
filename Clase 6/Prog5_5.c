// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.5
Frecuencia de calificaciones*/

const int tam = 50;
void lectura(int *, int);
void frecuencia(int *, int, int *, int);
void impresion(int *, int);
void mayor(int *, int);

int main(){

    int cal[tam], fre[6] = {0};
    lectura(cal, tam);
    frecuencia(cal, tam, fre, 6);
    printf("Frecuencia de calificaciones: \n");
    impresion(fre, 6);
    mayor(fre, 6);

}

void lectura(int vec[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Ingresa la calificacion 0:5 del alumno %d: \n", i+1);
        scanf("%d", &vec[i]);
    }
}

void impresion(int vec[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Vec[%d]: %d \n", i, vec[i]);
    }
}

void frecuencia(int a[], int p, int b[], int t){
    int i;
    for (i = 0; i < p; i++){
        if((a[i] >= 0)&&(a[i] < 6)){
            b[a[i]]++;
        }
    }
}

void mayor(int *x, int t){
    int i, mfre = 0, mval = x[0];
    for (i = 0; i < t; i++){
        if(mval < x[i]){
            mfre = i;
            mval = x[i];
        }
    }
    printf("Mayor frecuencia de notas: %d \t Valor: %d", mfre, mval);
}