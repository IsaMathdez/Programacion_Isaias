// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.3
Conflicto de variables*/

void f1(void);
int k = 5;

int main(){

    int I;
    for(I = 1; I <= 3; I++){
        f1();
    }

}

void f1(void){
    int k = 2;
    k += k;
    printf("El valor de la variable local es: %d \n", k);
    ::k = ::k + k;
    printf("El valor de la variable global es: %d \n", ::k);
}

// OJO: el operador :: no funciona en C, solo en C++