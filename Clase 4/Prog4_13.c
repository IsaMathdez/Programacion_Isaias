// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 4.13
Pares e impares*/

void parimp(int, int *, int *);

int main(){

    int i, n, num, par = 0, imp = 0;
    printf("Ingresa el numero de datos: \n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++){
        
        printf("Ingrese el numero #%d: ", i);
        scanf("%d \n", &num);
        parimp(num, &par, &imp);
    }
    printf("Numero de pares: %d \n", par);
    printf("Numero de impares: %d \n", imp);

}

void parimp(int num, int *p, int *i){
    int res;
    res = pow(-1, num);
    if(res > 0){
        *p += 1;
    } else if (res < 0){
        *i += 1;
    }
}