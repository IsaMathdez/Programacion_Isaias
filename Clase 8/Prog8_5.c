// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.5
Uniones */

union datos{
    char celular[15];
    char correo[20];
};

typedef struct{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;

void lectura(alumno *a);

int main(){

    alumno a1 = {120, "Maria", "Contabilidad", 8.9, "5-158-40-50"}, a2, a3;
    printf("Alumno 2: \n");
    printf("Ingrese la matricula: \n");
    scanf("%d", &a2.matricula);
    printf("INgrese el nombre: \n");
    gets(a2.nombre);
    printf("INgrese la carrera: \n");
    gets(a2.carrera);
    printf("INgrese el promedio: \n");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo: \n");
    gets(a2.personales.correo);

    printf("ALumno 3: \n");
    lectura(&a3);

    printf("\nDatos del alumno 1: \n");
    printf("%d \n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f \n", a1.promedio);
    puts(a1.personales.celular);
    puts(a1.personales.correo);

    strcpy(a1.personales.correo, "hgnez@hotmail.com");
    puts(a1.personales.celular);
    puts(a1.personales.correo);

    printf("Datos del Alumno 2: \n");
    printf("%d", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f \n", a2.promedio);
    puts(a2.personales.celular);
    puts(a2.personales.correo);

    printf("Datos del Alumno 3: \n");
    printf("%d \n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f \n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo);

}

void lectura(alumno *a){
    printf("INgrese la matricula: \n");
    scanf("%d", &a->matricula);
    fflush(stdin);
    printf("INgrese el nombre: \n");
    gets(a->nombre);
    printf("INgrese la carrera: \n");
    gets(a->carrera);
    printf("INgrese el promedio: \n");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese el telefono: \n");
    gets(a->personales.celular);
}

// THE END :D