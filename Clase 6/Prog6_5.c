// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.5
Alumnos*/

const int max = 50;
const int exa = 4;
void lectura(float [max][exa], int);
void funcion1(float [max][exa], int);
void funcion2(float [max][exa], int);

int main(){

    int nal;
    float alu[max][exa];
    do{
        printf("INgrese el numero de alumnos del grupo: \n");
        scanf("%d", &nal);
    } while (nal > max || nal < 1);
    lectura(alu, nal);
    funcion1(alu, nal);
    funcion2(alu, nal);

}

void lectura(float a[][exa], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < exa; j++){
            printf("Ingrese la calificacion %d del alumno %d: \n", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }
}

void funcion1(float a[][exa], int t){
    int i, j;
    float sum, pro;
    for (i = 0; i < t; i++){
        sum = 0;
        for (j = 0; j < exa; j++){
            sum += a[i][j];
        }
        pro = sum/exa;
        printf("El promedio del alumno %d es: %5.2f \n", i+1, pro);
    }
}

void funcion2(float a[][exa], int t){
    int i, j, may;
    float sum, pro, mpro = 0;
    for (j = 0; j < exa; j++){
        sum = 0;
        for (i = 0; i < t; i++){
            sum += a[i][j];
        }
        pro = sum/exa;
        if(pro > mpro){
            mpro = pro;
            may = j;
        }
        printf("El promedio del examen %d es: %f \n", j+1, pro);
    }
    printf("El examen con mayor promedio es: %d \t Promedio: %5.2f \n", may+1, mpro);
}