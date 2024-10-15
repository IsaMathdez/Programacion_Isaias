// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.9
Busqueda secuencial en arreglos desordenados*/

const int max = 100;
void lectura(int *, int);
int busca(int *, int, int);

int main(){

    int res, ele, tam, vec[max];
    do
    {
        printf("INgrese el tamaño del arreglo: \n");
        scanf("%d", &tam);
    } while (tam > max || tam < 1);
    lectura(vec, tam);    
    printf("Ingrese el elemento abuscar: \n");
    scanf("%d", &ele);
    res = busca(vec, tam, ele);
    if(res){
        printf("El elemento se encuentra en la posicion %d \n", res);
    } else {
        printf("El elemento NO se encuentra \n");
    }
}

void lectura(int a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("INgrese el elemento %d: \n", i+1);
        scanf("%d", &a[i]);
    }
}

int busca(int a[], int t, int k){
    int i = 0, ban = 0, res;
    while(i < t && !ban){
        if(a[i] == k){
            ban++;
        } else { 
            i++;
        }
    }
    if(ban){
        res = i + 1;
    } else {
        res = ban;
    }
    return res;
}