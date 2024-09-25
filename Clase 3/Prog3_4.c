// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 3.4
Suma cuadrados con while*/

int main(){

    int num;
    long cua, suc = 0; //Variable para cantidades grandes
    printf("Ingrese un numero entero, 0 para terminar \n");
    scanf("%d", &num); //Obtiene el valor
    while (num){ //MIentras el numero no sea 0
        cua = pow(num,2); //Sacar cuadrado
        printf("%d al cuadrado es %ld \n", num, cua);
        suc = suc + cua; //Ir sumando los cuadrados
        printf("Ingrese el siguiente numero \t");
        scanf("%d", &num); //Podra agregar o no mas numeros
    }
    printf("La suma de los cuadrados es %ld", suc); //Resultados finales

}