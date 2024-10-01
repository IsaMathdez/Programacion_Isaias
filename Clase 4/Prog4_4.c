// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 4.4
Prueba de variables */

int f1(void);
int f2(void);
int f3(void);
int f4(void);
int k = 3;

int main(){

    int I;
    for(I = 1; I <= 3; I++){
        printf("El resultado de f1 es: %d \n", f1());
        printf("El resultado de f2 es: %d \n", f2());
        printf("El resultado de f3 es: %d \n", f3());
        printf("El resultado de f4 es: %d \n \n", f4());
    }

}

int f1(void){
    // Usa variable global
    k += k;
    return k;
}

int f2(void){
    //Usa variable local
    int k = 1;
    k++;
    return k;
}

int f3(void){
    //Usa variable estatica
    static int k = 8;
    k += 2;
    return k;
}

int f4(void){
    //Usa global y local
    int k = 5;
    k = k + ::k;
    return k;
}

// OJO: el operador :: no funciona en C, solo en C++