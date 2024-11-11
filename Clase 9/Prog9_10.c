// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.10
Modifica archivo */

typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void modifica(FILE *);

int main(){

    FILE *ar;
    if((ar = fopen("ad1.dat", "r+")) != NULL){
        modifica(ar);
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void modifica(FILE *ap){
    int d;
    alumno alu;
    printf("Ingrese el numero de registro que desea modificar: \n");
    scanf("%d", &d);

    fseek(ap, (d-1)*sizeof(alumno), 0);
    fread(&alu, sizeof(alumno), 1, ap);
    printf("Ingrese el promedio correcto del alumno: \n");
    scanf("%f", &alu.promedio);
    fseek(ap, (d-1)*sizeof(alumno), 0);
    fwrite(&alu, sizeof(alumno), 1, ap);
}