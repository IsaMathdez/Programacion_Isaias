// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.10
Si a es Mutiplo de b*/

int multiplo(int, int);

int main(){

    int nu1, nu2, res;
    printf("Ingresa los dos numeros: \n");
    scanf("%d %d", &nu1, &nu2);
    res = multiplo(nu1, nu2);
    if(res){
        printf("\nEl Segundo numero es multiplo del primero.");
        printf("\nEs multiplo por %d de el primero", nu2/nu1); //Agregado mio
    } else {
        printf("\nEl Segundo numero NO es multiplo del primero.");
    }

}

int multiplo(int n1, int n2){
    int res;
    if((n2%n1)==0){
        res = 1;
    } else {
        res = 0;
    }
    return res;
}