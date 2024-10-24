// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.2
Estructuras con punteros */

struct alumno{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

void lectura(struct alumno *);

int main(){

    struct alumno a0 = {120, "Maria", "Contabilidad", 8.9, "Queretaro"};
    struct alumno *a3, *a4, *a5, a6, a7;
    a3 = &a0;
    a4 = &a6;
    printf("INgrese la matricula del alumno 4: \n");
    scanf("%d", &(*a4).matricula);
    fflush(stdin);
    printf("INgrese el nombre del alumno 4: \n");
    gets(a4->nombre);
    printf("INgrese la carrera del alumno 4: \n");
    gets(a4->carrera);
    printf("INgrese el promedio del alumno 4: \n");
    scanf("%f", &a4->promedio);
    printf("INgrese La direccion del alumno 4: \n");
    gets(a4->direccion);

    a5 = &a7;
    lectura(a5);
    lectura(&a6);
    printf("Datos del alumno 3: \n");
    printf("%d \t %s \t %s \t %.2f \t %s \n", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);
    printf("Datos del alumno 4: \n");
    printf("%d \t %s \t %s \t %.2f \t %s \n", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);
    printf("Datos del alumno 5: \n");
    printf("%d \t %s \t %s \t %.2f \t %s \n", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);
    printf("Datos del alumno 6: \n");
    printf("%d \t %s \t %s \t %.2f \t %s \n", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);

}

void lectura(struct alumno *a){

    printf("INgrese la matricula del alumno: \n");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("INgrese el nombre del alumno: \n");
    gets(a->nombre);
    printf("INgrese la carrera del alumno: \n");
    gets((*a).carrera);
    printf("INgrese el promedio del alumno: \n");
    scanf("%f", &a->promedio);
    printf("INgrese La direccion del alumno: \n");
    gets(a->direccion);
}