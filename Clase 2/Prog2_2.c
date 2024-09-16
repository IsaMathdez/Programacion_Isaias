// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.2
Incremento de precio: el precio de un producto incrementa un 11% si es inferior a 1,500*/

int main(){

    float pre, npr;
    printf("Ingrese el precio del producto \n");
    scanf("%f", &pre);
    if (pre > 1500)
    {
        npr = pre * 1.11;
        printf("El nuevo precio es %7.2f", npr);
    }
    
}