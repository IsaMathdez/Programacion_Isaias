// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.19
Ordenar de menor a mayor*/

typedef struct{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void ordena(FILE *, FILE *);

int main(){

    FILE *ar1, *ar2;
    ar1 = fopen("ad5.dat", "r");
    ar2 = fopen("ad6.dat", "w");
    if((ar1 != NULL) && (ar2 != NULL)){
        ordena(ar1, ar2);
        fclose(ar1); fclose(ar2);
    } else {
        printf("\nLos archivos no se pueden abrir \n");
    }
}

void ordena(FILE *ap1, FILE *ap2){
    alumno alu;
    int i, n, t;
    t = sizeof(alumno);
    fseek(ap1, t, 2);
    n = (ftell(ap1)/t)-1;
    rewind(ap1);
    for (i = (n-1); i >= 0; i++){
        fseek(ap1, i * t, 0);
        fread(&alu, t, 1, ap1);
        fwrite(&alu, t, 1, ap2);
    }
    
}