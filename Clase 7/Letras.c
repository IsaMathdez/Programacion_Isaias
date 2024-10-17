// Programa hecho por Isaias Matos
#include <stdio.h>

//Recibir una letra y escribirla en mayuscula o viceversa.

int main(){

    char p1;
    int op;
    do{
        printf("Ingrese una letra \n");
        fflush(stdin);
        p1 = getchar();
        if(p1 > 96 && p1 < 123){
            putchar(p1 - 32);
            printf("\n");
        } else if(p1 > 64 && p1 < 91){
            putchar(p1 + 32);
            printf("\n");
        } else {
            printf("El caracter no es una letra. \n");
        }
        printf("Escriba 1 para repetir programa: \n");
        scanf("%d", &op);
    } while (op == 1);
    
}
