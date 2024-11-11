// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.8
*/

typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE *);

int main(){

    FILE *ar;
    if((ar = fopen("ad1.dat", "w")) != NULL){
        escribe(ar);
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void escribe(FILE *ap){
    alumno alu;
    int i = 0, r;
    printf("\n Desea ingresar informacion sobre alumnos?     Si - 1     No - 0 \n");
    scanf("%d", &r);
    while(r){
        i++;
        printf("Matricula del alumno %d: \n", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: \n", i);
        fflush(stdin);
        gets(alu.nombre);
        printf("Carrera del alumno %d: \n", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: \n", i);
        scanf("%f", &alu.promedio);

        fwrite(&alu, sizeof(alumno), 1, ap);
        printf("\n Desea ingresar nueva informacion sobre alumnos?     Si - 1     No - 0 \n");
        scanf("%d", &r);
    }
}