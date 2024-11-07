// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.6
Archivos con variables numericas Leer */

int main(){

    int i, j, n, mat;
    float cal, pro;
    FILE *ar;
    if((ar = fopen("arc8.txt", "r")) != NULL){
        fscanf(ar, "%d", &n);
        for (i = 0; i < n; i++){
            fscanf(ar, "%d", &mat);
            printf("%d Matri \t", mat);
            pro = 0;
            for (j = 0; j < 5; j++){
                fscanf(ar, "%f", &cal);
                pro += cal;
            }
            printf(" %.2f \n", pro/5);
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
}