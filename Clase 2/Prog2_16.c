// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.16
Empresa textil*/

int main(){

    int cla, cat, ant, res;
    printf("Ingrese la clave, categoria y antiguedad del trabajador \n");
    scanf("%d %d %d", &cla, &cat, &ant);
    switch (cat)
    {
    case 3:
    case 4:
        if (ant >= 5){
            res = 1;
        } else {
            res = 0;
        }
        break;

    case 2:
        if (ant >= 7){
            res = 1;
        } else {
            res = 0;
        }
        break;
    
    default:
        res = 0;
        break;
    }
    if (res == 1){
        printf("El trabajador con clave %d reune las condiciones para el puesto", cla);
    } else {
        printf("El trabajador con clave %d NO reune las condiciones para el puesto", cla);
    }

}