// Sacar Raiz Cuadrada

#include <stdio.h>
#include <stdlib.h>
int main(){

    float X = 0.0;
    float b = 0.0;
    int op = 0;
    int cont = 0;

    do{
        printf("Dame un numero para sacar su raiz cuadrada \n");
        scanf("%f \n", &X);
        b = X;

        while(!(b==(X/b))){
            cont++;
            b = ((X/b)+b)/2;
            printf("Valor de b[%i]=%f \n", cont, b);
        }
        printf("\nLa raiz cuadrada de %f es: %f \n", X, b);

        printf("Escriba 1 para repetir programa \n");
        scanf("%i", &op);
    } while (op == 1);

}