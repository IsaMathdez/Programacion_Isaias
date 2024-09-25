// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.5
Suma de pagos con do while*/

int main(){

    float pag, spa = 0; //Variables
    printf("Ingrese el primer pago \t"); //SE obtiene almenos un pago
    scanf("%f", &pag);
    do{ //Ejecuta y recibe el resto de pagos
        spa += pag; //Suma pagos
        printf("Ingrese el siguiente pago \t"); //Se puede o no agregar el siguiente pago
        scanf("%f", &pag);
    } while (pag);
    printf("El total de pagos del mes es: %.2f", spa); //Imprime resultados
    
}