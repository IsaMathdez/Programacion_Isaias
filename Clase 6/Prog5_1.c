// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.1
Cuenta numeros*/

int main(){

    int i, num, cue = 0;
    int arre[100];
    for (i = 0; i < 100; i++){

        printf("Ingrese el numero %d del arreglo: \n", i);
        scanf("%d", &arre[i]);
    }
    printf("Ingrese el numero a buscar en el arreglo \n");
    scanf("%d", &num);
    for (i = 0; i < 100; i++){

        if(arre[i] == num){
            cue++;
        }
    }
    printf("El %d se encuentra %d veces en el arreglo", num, cue);
    

}