// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.8
Recibe la matricula, carrera, semestre y el promediode un estudiante, determina si puede ser asitente */

int main(){

    int mat, car, sem;
    float pro;
    printf("Ingrese su matricula \n");
    scanf("%d", &mat);
    printf("Ingrese su carrera: \n 1) Industrial \t 2) Telematica \n 3) Computacion \t 4) Mecanica \n");
    scanf("%d", &car);
    printf("Ingrese su semestre y luego su promedio \n");
    scanf("%d %f", &sem, &pro);

    switch (car)
    {
    case 1:
        if (sem >= 6 && pro >= 8.5){
            printf("Aprobado %d %d %5.2f", mat, car, pro);
        }
        break;
    
    case 2:
        if (sem >= 5 && pro >= 9.0){
            printf("Aprobado %d %d %5.2f", mat, car, pro);
        }
        break;

    case 3:
        if (sem >= 6 && pro >= 8.8){
            printf("Aprobado %d %d %5.2f", mat, car, pro);
        }
        break;

    case 4:
        if (sem >= 7 && pro >= 9.0){
            printf("Aprobado %d %d %5.2f", mat, car, pro);
        }
        break;

    default:
        printf("Ay socio, error en la carrera");
        break;
    }
}