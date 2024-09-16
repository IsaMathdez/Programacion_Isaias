// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.4
Incremento de precio: si el precio es menor de 1500 incrementa al 11%, en caso contrario un 8% mayor o igual*/

int main(){

    float pre, npr;
    printf("Ingrese el precio del producto: \n");
    scanf("%f", &pre);
    if (pre < 1500)
    {
        npr = pre * 1.11;
        printf("El nuevo precio es: %8.2f", npr);
    } else {
        npr = pre * 1.08;
        printf("El nuevo precio es: %8.2f", npr);
    }
    
}