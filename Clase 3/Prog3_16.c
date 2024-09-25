// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.16
Promedio de calificaciones*/

int main(){

    int i, mat, mamat, memat; //Variables para mayor y menor alunmo
    float sum, pro, cal, mapro = 0.0, mepro = 11.0; //Lo mismo pero para el promedio
    printf("INgrese la matricula del primer alumno: \n");
    scanf("%d", &mat); //Obtener almenos un alumno
    while(mat){ //Mientras la matricula no sea 0
        sum = 0;
        for(i = 1; i <= 5; i++){ //Para cada una de las 5 calificaciones
            do{ //Yo agrege un do while para que las notas esten dentro del rango (0,100)
                printf("Ingrese Calificacion del alumno: \n");
                scanf("%f", &cal);
                if(cal < 0 || cal > 100){ //Verifica
                    printf("Calificacion fuera de rango \n");
                } else {
                    sum += cal; //Suma las 5 calificaciones si esta cumple
                }
            } while (cal < 0 || cal > 100); // Se repite cuando la nota no cumple cn el rango
        }
        pro = sum/5; // Saca promedio
        printf("Matricula: %d \t Promedio: %5.2f \n", mat, pro);
        if(pro > mapro){ //Si su promedio es el mayor hasta ahora se guarda
            mapro = pro;
            mamat = mat;
        }
        if(pro < mapro){ //Si es el menor hasta ahora se guarda
            mepro = pro;
            memat = mat;
        }
        printf("Ingrese la matricula del sig alumno: \n"); //Continuamos con el resto de alumnos
        scanf("%d", &mat);
    }
    printf("\nAlumno con mejor promedio: \t %d \t %5.2f \n", mamat, mapro); //Una vez terminado se imprime los records
    printf("Alumno con peor promedio: \t %d \t %5.2f \n", memat, mepro);

}