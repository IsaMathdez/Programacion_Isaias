// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 2.15
Spa: costo de cliente y descuentos segun edad*/

int main(){

    int tra, eda, dia;
    float cos;
    printf("Ingrese tratamiento, edad y dias \n");
    scanf("%d %d %d", &tra, &eda, &dia);
    switch (tra)
    {
    case 1:
        cos = dia * 2800;
        break;

    case 2:
        cos = dia * 1950;
        break;
    
    case 3:
        cos = dia * 2500;
        break;

    case 4:
        cos = dia * 1150;
        break;
    
    default:
        cos = -1;
        break;
    }
    if (cos != -1){
        if (eda >= 60 ){
            cos = cos * 0.75;
        } else if (eda <= 25){
            cos = cos * 0.85;
        }
        printf("Clave: %d \t Dias: %d \t Costo total %8.2f", tra, dia, cos);
    } else {
        printf("La clave es incorrecta");
    }

}