// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.5
Archivos con variables numericas */

int main(){

    int i, j, n, mat;
    float cal;
    FILE *ar;
    printf("Ingrese el numero de alumnos \n");
    scanf("%d", &n);
    if((ar = fopen("arc8.txt", "w")) != NULL){
        fprintf(ar, "%d", n); 
        for (i = 0; i < n; i++){
            printf("INgrese la marticula del alumno %d: \n", i+1);
            scanf("%d", &mat);
            fprintf(ar, "\n%d", mat);
            for (j = 0; j < 5; j++){
                printf("Calificacion %d/%d: \n", j+1, 5);
                scanf("%f", &cal);
                fprintf(ar, "%.2f", cal);
            }
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
    
}