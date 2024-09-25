// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.2
Suma los positivos*/

int main(){

    int i, n, sum, num; //Variables de numero y suma
    sum = 0;
    printf("Ingrese el numero de datos \n"); //Obtener cantidad de datos
    scanf("%d", &n);
    for (i = 1; i <= n; i++){ //Repetir N veces
        printf("Ingrese el dato no. %d: \t", i); //Obtener cada numero
        scanf("%d", &num);
        if (num > 0){
            sum = sum + num; //Se suman los datos mientras sean positivos
        }
    }
    printf("La suma de enteros positivos es: %d", sum);//MOstrar resultados

}