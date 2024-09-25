// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 3.10
Suma de pares y promedio de impares*/

int main(){

    int i, n, num, spa = 0, sim = 0, cim = 0; //Variables
    printf("Ingresa el numero de datos \n"); //Obtener el numero de datos
    scanf("%d", &n);
    if(n > 0){ //Si es mayor que 0
        for(i=1; i <= n; i++){ //Se repite N veces
            printf("Ingrese el numero %d/%d: \n", i, n); //Se obtiene el numero
            scanf("%d", &num);
            if(num){
                if(pow(-1,num)>0){ //Si es par se van sumando
                    spa += num;
                } else {
                    sim += num; //Si es impar se van sumando y contando
                    cim++;
                }
            }
        }
        printf("La suma de los numeros pares es: %d \n", spa); //La suma de los pares
        printf("El promedio de numeros impares es: %5.2f", (float)(sim/cim)); //Saca promedio de los impares

    } else {
        printf("El valor es incorrecto"); //Dado error
    }

}