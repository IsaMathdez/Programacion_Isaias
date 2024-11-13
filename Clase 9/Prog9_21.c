// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.21
Examen de admision */

typedef struct{
    int clave;
    char nombre[20];
    int carrera;
    float promedio;
    float examen;
    char telefono[12];
} alumno;

float f1(FILE *);
void f2(FILE *, FILE *, FILE *, FILE *, FILE *, FILE *);
void f3(FILE *, FILE *, FILE *, FILE *, FILE *);

int main(){

    float pro;
    FILE *ap, *c1, *c2, *c3, *c4, *c5;
    ap = fopen("alu.dat", "r");
    c1 = fopen("car1.dat", "w+");
    c2 = fopen("car2.dat", "w+");
    c3 = fopen("car3.dat", "w+");
    c4 = fopen("car4.dat", "w+");
    c5 = fopen("car5.dat", "w+");
    if((ap != NULL) && (c1 != NULL) && (c2 != NULL) && (c3 != NULL) && (c4 != NULL) && (c5 != NULL)){
        pro = f1(ap);
        printf("\nPromedio examen admision: %.2f", pro);
        f2(ap, c1, c2, c3, c4, c5);
        f3(c1, c2, c3, c4, c5);
    } else {
        printf("\nLos archivos no se pudieron abrir \n");
    }
    fclose(ap); fclose(c1); fclose(c2);
    fclose(c3); fclose(c4); fclose(c5);
}

