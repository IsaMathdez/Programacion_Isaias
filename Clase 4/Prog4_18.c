// Programa hecho por Isaias Matos
#include <stdio.h>
#include <math.h>

/* Programa 4.18
Valores que sastifacen una expresion*/

int expresion(int, int, int);

int main(){

    int exp, t = 0, p = 0, q = 0;
    exp = expresion(t, p, q);
    while(exp < 5500){
        while(exp < 5500){
            while(exp < 5500){
                printf("T: %d, P: %d, Q: %d, Resultado: %d \n", t, p, q, exp);
            }
            p++;
            q = 0;
            exp = expresion(t, p, q);
        }
        t++;
        p = 0;
        q = 0;
        exp = expresion(t, p, q);
    }

}

int expresion(int t, int p, int q){
    int res;
    res = 15 * pow(t,4) + 12 * pow(p,5) + 9 * pow(q,6);
    return res;
}