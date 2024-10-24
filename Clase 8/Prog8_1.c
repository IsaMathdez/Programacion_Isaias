// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.1
Estructuras  */

struct alumno{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

int main(){

    struct alumno a1 = {120, "Maria", "Contabilidad", 8.9, "Queretaro"}, a2, a3;
    char nom[20], car[20], dir[20];
    int mat;
    float pro;
    printf("INgrese la matricula del alumno 2: \n");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("INgrese el nombre del alumno 2: \n");
    gets(a2.nombre);
    printf("INgrese la carrera del alumno 2: \n");
    gets(a2.carrera);
    printf("INgrese el promedio del alumno 2: \n");
    scanf("%f", &a2.promedio);
    printf("INgrese La direccion del alumno 2: \n");
    gets(a2.direccion);

    printf("INgrese la matricula del alumno 3: \n");
    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);
    printf("INgrese el nombre del alumno 3: \n");
    gets(nom);
    strcpy(a3.nombre, nom);
    printf("INgrese la carrera del alumno 3: \n");
    gets(car);
    strcpy(a3.carrera, car);
    printf("INgrese el promedio del alumno 3: \n");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);
    printf("INgrese la direccion del alumno 3: \n");
    gets(dir);
    strcpy(a3.direccion, dir);

    printf("Datos del alumno 1: \n");
    printf("%d \n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f \n", a1.promedio);
    puts(a1.direccion);

    printf("Datos del alumno 2: \n");
    printf("%d \n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f \n", a2.promedio);
    puts(a2.direccion);

    printf("Datos del alumno 3: \n");
    printf("%d \t %s \t %s \t %.2f \t %s \n", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);

}