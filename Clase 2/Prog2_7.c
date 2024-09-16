// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.7
Ventas descendentes: al recibir tres datos los escribe de forma descendente*/

int main(){

    float p, r, s;
    printf("Ingresa los tres valores \n");
    scanf("%f %f %f", &p, &s, &r);
    if (p > s){
        if (p > r){
            if (s > r){
                printf("El orden es P, S y R: %8.2f %8.2f %8.2f", p, s, r);
            } else {
                printf("El orden es P, R y S: %8.2f %8.2f %8.2f", p, r, s);
            }
        } else {
            printf("El orden es R, P y S: %8.2f %8.2f %8.2f", r, p, s);
        }       
    } else {
        if (s > r){
            if (p > r){
                printf("El orden es S, P y R: %8.2f %8.2f %8.2f", s, p, r);
            } else {
                printf("El orden es S, R y P: %8.2f %8.2f %8.2f", s, r, p);
            }
        } else {
            printf("El orden es R, S y P: %8.2f %8.2f %8.2f", r, s, p);
        }
    }

}