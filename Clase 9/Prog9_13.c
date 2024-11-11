// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 9.13
Cuenta caracteres en archivo */

int cuenta(char);

int main(){

    int res;
    char car;
    printf("INgrese el caracter a buscar en el archivo: \n");
    car = getchar();
    res = cuenta(car);
    if(res != -1){
        printf("El caracter %c se encuentra en el archivo %d veces \n", car, res);
    } else {
        printf("No se pudo abrir el archivo");
    }
}

int cuenta(char car){
    int res, con = 0;
    char p;
    FILE *ar;
    if((ar = fopen("arc.txt", "r")) != NULL){
         while(!feof(ar)){
            p = getc(ar);
            if(p == car){
                con++;
            }
         }
        fclose(ar);
        res = con;
    } else {
        res = -1;
    }
    return res;
}