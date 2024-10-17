// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.11
Casa de bolsa*/

void lecturaM(float [][12], int, int);
void lecturaV(float *, int);
void f1(float [][12], int, int, float *, float *);
void f2(float [][12], int, int);
void f3(float *, int);

int main(){

    float fon[5][12], pre[5], ren[5];
    lecturaM(fon, 5, 12);
    lecturaV(pre, 5);
    f1(fon, 5, 12, pre, ren);
    f2(fon, 5, 12);
    f3(ren, 5);

}

void lecturaM(float a[][12], int f, int c){
    int i, j;
    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
            printf("Precio fondo %d \t mes %d: \n", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }
}

void lecturaV(float a[], int t){
    int i;
    printf("\n");
    for (i = 0; i < t; i++){
        printf("Precio fondo %d al 31/12/2003: \n", i+1);
        scanf("%f", &a[i]);
    }
}

void f1(float a[][12], int f, int c, float b[], float v[]){
    int i;
    printf("RENDIMINETOS ANUALES DE LOS FONDOS: \n");
    for (i = 0; i < f; i++){
        v[i] = (a[i][c-1] - b[i])/(b[i]*100);
        printf("Fondo %d: %.2f \n", i+1, v[i]);
    }
}

void f2(float a[][12], int f, int c){
    int i, j;
    float sum, pro;
    printf("PROMEDIO ANUALIZADO DE LAS ACCIONES DE LOS FONDOS");    
    for (i = 0; i < f; i++){
        sum = 0;
        for (j = 0; j < c; j++){
            sum += a[i][j];
        }
        pro = sum/c;
        printf("Fondo %d: %.2f \n", i+1, pro);
    }
}

void f3(float a[], int f){
    float me = a[0], pe = a[0];
    int m = 0, p = 0, i;
    for (i = 1; i < f; i++){
        if (a[i] > me){
            me = a[i];
            m = i;
        } else if(a[i] < me){
            pe = a[i];
            p = i;
        }
    }
    printf("MEJOR Y PEOR FONDO DE INVERSION \n");
    printf("Mejor fondo: %d \t Rendimiento: %.2f \n", m+1, me);
    printf("Peor fondo: %d \t Rendimiento: %.2f \n", p+1, pe);
}