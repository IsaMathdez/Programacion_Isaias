// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.9
Leer estructuras de archivo */

typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *);

int main(){

    FILE *ar;
    if((ar = fopen("ad1.dat", "r")) != NULL){
        lee(ar);
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void lee(FILE *ap){
    alumno alu;
    fread(&alu, sizeof(alumno), 1, ap);
    while(!feof(ap)){
        printf("Matricula: %d \n", alu.matricula);
        printf("Carrera: %d \n", alu.carrera);
        printf("Promedio: %.2f \n", alu.promedio);
        puts(alu.nombre);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}