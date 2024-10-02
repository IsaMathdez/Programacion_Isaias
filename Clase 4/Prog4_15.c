// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.15
Producto de los N primeros naturales*/

int productoria(int);

int main(){

    int num;
    do{
        printf("Ingresa el numero para calcular la productoria: \n");
        scanf("%d", &num);
    } while (num > 100 || num < 1);
    printf("La productoria de %d es: %d", num, productoria(num));

}

int productoria(int n){
    int i, pro = 1;
    for(i = 1; i <= n; i++){
        pro *= i;
    }
    return pro;
}