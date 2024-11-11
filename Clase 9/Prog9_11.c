// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.11
INcrementa salarios */

typedef struct{
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *);

int main(){

    FILE *ar;
    if((ar = fopen("ad5.dat", "r+")) != NULL){
        incrementa(ar);   
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
    rewind(ar);
}

void incrementa(FILE *ap){
    int i, j, t;
    float sum;
    empleado emple;
    t = sizeof(empleado);
    fread(&emple, t, 1, ap);
    while(!feof(ap)){
        i = ftell(ap) / t;
        sum = 0;
        for(j = 0; j < 12; j++){
            sum += emple.ventas[j];
        }
        if(sum > 1000000){
            emple.salario *= 1.10;
            fseek(ap, (i-1)*sizeof(empleado), 0);
            fwrite(&emple, t, 1, ap);
            fseek(ap, i*sizeof(empleado), 0);
        }
        fread(&emple, t, 1, ap);
    }
}