#include <stdio.h>

/* Programa 3.7
Lanzamiento de martillo*/

int main(){

    int i, n;
    float lan, sla = 0; // Variables de lanzamiento y prmedio
    do{
        printf("Ingresa el numero de lanzamientos \n");
        scanf("%d", &n);
    } while (n < 1 || n > 11); //Verificar que cumple con el rango
    for (i = 1; i <= n; i++) //Para cada lanzamiento
    {
        printf("Ingresa el lanzamiento %d \n", i);
        scanf("%f", &lan);
        sla += lan; // Va sumando los lanzamientos
    }
    sla /= n; //Saca promedio
    printf("El promedio de lanzamientos es: %.2f", sla); // IMprime resultados    

}