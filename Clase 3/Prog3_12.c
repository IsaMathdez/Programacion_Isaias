// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 3.12
Serie de ULAM*/

int main(){

    int num;
    printf("Ingresa el numero para calcular la serie: \n"); //Recibir el numero
    scanf("%d", &num);
    if(num > 0){ //Verifica para comenzar
        printf("Serie de ULAM \n");
        printf("%d \t", num);
        while(num != 1){ //Mientras no sea 1 se tomaran uno de los dos caminos
            if(pow(-1,num)>0){ // Si es par
                num /= 2;
            } else { //Si es impar
                num = num*3+1;
            }
            printf("%d \t", num); //Se iran imprimiendo los numeros hasta llegar al 1
        }
    } else {
        printf("\nNum debe ser entero positivo");
    }

}