// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.7
ARchivo con variables y funciones */

void promedio(FILE *);

int main(){

    FILE *ar;
    if((ar = fopen("arc8.txt", "r")) != NULL){
        promedio(ar); 
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
}

void promedio(FILE *ar1){
    int i, j, n, mat;
    float pro, cal;
    fscanf(ar1, "%d", &n);
    for (i = 0; i < n; i++){
        fscanf(ar1, "%d", &mat);
        printf("%d \t", mat);
        pro = 0;
        for (j = 0; j < 5; j++){
            fscanf(ar1, "%f", &cal);
            pro += cal;
        }
    }
    printf("\t %.2f ", pro/5);
    printf("\n");
    
}