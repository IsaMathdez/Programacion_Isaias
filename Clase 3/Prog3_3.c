// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.3
Suma pagos con while*/

int main(){

    float spa, pag; //Variables
    spa = 0;
    printf("Ingrese el primer pago \t"); //Se recibe almenos un pago
    scanf("%f", &pag);
    while(pag){ //Mientras no sea 0
        spa = spa + pag; //Se van sumando los pagos
        printf("Ingrese el siguiente pago \t"); //Se pude agregar o no otro pago
        scanf("%f", &pag);
    }
    printf("El total de pagos del mes es: %.2f", spa); // Imprime los resutados

}