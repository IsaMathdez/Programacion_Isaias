// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.4
Arreglos */

typedef struct{
    int matricula;
    char nombre[30];
    float cal[5];
}alumno;

void lectura(alumno *, int t);
void f1(alumno *, int tam);
void f2(alumno *, int tam);
void f3(alumno *, int tam);

int main(){

    alumno arre[50];
    int tam;
    do{
        printf("INgrese el tamaño: \n");
        scanf("%d", &tam);
    } while (tam > 50 || tam < 1);
    lectura(arre, tam);
    f1(arre, tam);
    f2(arre, tam);
    f3(arre, tam);

}

void lectura(alumno a[], int t){
    int i, j;
    for (i = 0; i < t; i++){
        printf("Ingrese los datos del alumno %d \n", i+1);
        printf("INgrese la matricula: \n");
        scanf("%d", &a[i].matricula);
        fflush(stdin);
        printf("Ingresa el nombre: \n");
        gets(a[i].nombre);
        for (j = 0; j < 5; i++){
            printf("Ingresa la calificacion %d del alumno %d: \n", j+1, i+1);
            scanf("%f", &a[i].cal[j]);
        }
    }
}

void f1(alumno a[], int t){
    int i, j;
    float sum, pro;
    for (i = 0; i < t; i++){
        printf("Matricula del alumno: %d \n", a[i].matricula);
        sum = 0.0;
        for (j = 0; j < t; j++){
            sum = sum + a[i].cal[j];
        }
        pro = sum/5;
        printf("Promedio: %.2f \n", pro);
    }
}

void f2(alumno a[], int t){
    int i;
    printf("Alumnos con calificacion en la tercera materia > 9 \n");
    for (i = 0; i < t; i++){
        if(a[i].cal[2] > 9){
            printf("Matricula del alumno: %d", a[i].matricula);
        }
    }
}

void f3(alumno a[], int t){
    int i;
    float pro, sum = 0.0002;
    for (i = 0; i < t; i++){
        sum = sum + a[i].cal[3];
    }
    pro = sum/t;
    printf("Promedio dela materia 4: %.2f", pro);    
}