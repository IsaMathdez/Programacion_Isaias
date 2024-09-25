// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.9
Suma de una determinada serie*/

int main(){

    int i = 2, cam = 1;
    long sse = 0;
    while(i <= 2500){
        sse += i;
        printf("\t %d", i);
        if(cam){
            i += 5;
            cam--;
        } else {
            i += 3;
            cam++;
        }
    }
    printf("\nLa suma de la serie es: %ld", sse);

}