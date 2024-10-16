// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.11
BUsqueda binaria*/

const int max = 100;
void lectura(int *, int);
int binaria(int *, int, int);

int main(){

    int res, ele, tam, vec[max];
    do{
        printf("INgrese el tamaño del arreglo: \n");
        scanf("%d", &tam);
    } while (tam > max || tam < 1);
    lectura(vec, tam);
    printf("Ingrese el elemento a buscar: \n");
    scanf("%d", &ele);
    res = binaria(vec, tam, ele);
    if(res){
        printf("El elemento se encuentra en la posicion %d \n", res); 
    } else {
        printf("El elemento NO se encuentra en el arreglo \n");
    }
}

void lectura(int a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Ingrese el elemento %d: \n", i+1);
        scanf("%d", &a[i]);
    }
}

int binaria(int a[], int t, int e){
    int ele, izq = 0, cen, der = t-1, ban = 0;
    while((izq <= der)&&(!ban)){
        cen = (izq + der)/2;
        if(e == a[cen]){
            ban = cen;
        } else {
            if(e > a[cen]){
                izq = cen + 1;
            } else {
                der = cen - 1;
            }
        }
    }
    return ban;
}