// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.11
Mayor divisor de un numero*/

int mad(int);

int main(){

    int num, res;
    printf("Ingresa el numero: \n");
    scanf("%d", &num);
    res = mad(num);
    printf("El mayor divisor de %d es %d.", num, res);

}

int mad(int x){
    int i = (x/2);
    while(x % i){
        i--;
    }
    return i;
}