// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.7
Escuela */

typedef struct {
    char mat[20];
    int pro;
} matpro;

typedef struct{
    int matri;
    char nom[20];
    matpro cal[5];
} alumno;

void lectura(alumno *, int);
void f1(alumno *, int);
void f2(alumno *, int);
void f3(alumno *, int);

int main(){

    alumno alu[50];
    int tam;
    do
    {
        printf("Ingrese el numero de productos: \n");
        scanf("%d", &tam);
    } while (tam > 50 || tam < 1);
    lectura(alu, tam);
    f1(alu, tam);
    f2(alu, tam);
    f3(alu, tam);

}

void lectura(alumno a[], int t){
    int i, j;
    for (i = 0; i < t; i++){
        printf("INgresa los datos del alumno %d: \n", i+1);
        printf("INgresa la matricula: \n");
        scanf("%d", &a[i].matri);
        fflush(stdin);
        printf("Ingrese el nombre: \n");
        gets(a[i].nom);
        for (j = 0; j < 5; j++){
            printf("Materia %d: \n", j+1);
            gets(a[i].cal[j].mat);
            printf("Promedio: \n");
            scanf("%d", &a[i].cal[j].pro);
        }
    }
}

void f1(alumno a[],int t){
    int i, j;
    float sum;
    for (i = 0; i < t; i++){
        printf("Matricula del alumno: %d \n", a[i].matri);
        sum = 0.0;
        for(j=0; j<5; j++){
            sum = sum + a[i].cal[j].pro;
        }
        sum /= 5;
        printf("Promedio: %.2f \n", sum);
    }
}

void f2(alumno a[], int t){
    int i;
    printf("ALumnos con calificacion mayor a 9 en la tercera materia: \n");
    for (i = 0; i < t; i++){
        if(a[i].cal[2].pro > 9){
            printf("Matricula del alumno: %d \n", a[i].matri);
        }
    }
}

void f3(alumno a[], int t){
    int i;
    float sum = 0.0;
    for (i = 0; i < t; i++){
        sum = sum + a[i].cal[2].pro;
    }
    sum /= t;
    printf("Promedio de la cuarta materia: %.2f", sum);
}
