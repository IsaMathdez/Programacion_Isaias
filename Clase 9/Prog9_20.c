// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.20
Escuela estadisticas */

typedef struct{
    char materia[20];
    int calificacion;
} matcal;

typedef struct{
    int matricula;
    char nombre[20];
    matcal cal[5];
} alumno;

void f1(FILE *);
void f2(FILE *);
float f3(FILE *);

int main(){

    float pro;
    FILE *ap;
    if((ap = fopen("esc.dat", "r")) != NULL){
        f1(ap);
        f2(ap);
        pro = f3(ap);
        printf("\nPROMEDIO GENERAL MATERIA 4: %.2f \n", pro);
        fclose(ap);
    } else {
        printf("\nEl archivo no se puede abrir \n");
    }
}

void f1(FILE *ap){
    alumno alu;
    int j;
    float sum, pro;
    printf("\nMatricula y Promedios: \n");
    fread(&alu, sizeof(alumno), 1, ap);
    while(!feof(ap)){
        printf("Matricula: %d \n", alu.matricula);
        sum = 0.0;
        for (j = 0; j < 5; j++){
            sum += alu.cal[j].calificacion;
        }
        pro = sum/5;
        printf("Promedio: %.2f \n", pro);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}

void f2(FILE *ap){
    alumno alu;
    rewind(ap);
    printf("Alumnos con calificacion > 9 en materia 3: \n");
    fread(&alu, sizeof(alumno), 1, ap);
    while(!feof(ap)){
        if(alu.cal[2].calificacion > 9){
            printf("Matricula del alumno: %d \n", alu.matricula);
        }
        fread(&alu, sizeof(alumno), 1, ap);
    }
}

float f3(FILE *ap){
    alumno alu;
    int i = 0;
    float sum = 0, pro;
    rewind(ap);
    fread(&alu, sizeof(alumno), 1, ap);
    while(!feof(ap)){
        i++;
        sum += alu.cal[3].calificacion;
        fread(&alu, sizeof(alumno), 1, ap);
    }
    pro = (float)sum / i;
    return pro;
}