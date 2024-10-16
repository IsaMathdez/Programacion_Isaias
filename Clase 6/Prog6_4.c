// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.4
Simetrico*/

const int max = 100;
void lectura(int [][max], int);
int simetrico(int [][max], int);

int main(){

    int mat[max][max], n, res;
    do{
        printf("INgrese el tamaño del arreglo: \n");
        scanf("%d", &n);
    } while (n > max || n < 1);
    lectura(mat, n);
    res = simetrico(mat, n);
    if(res){
        printf("El arreglo es simetrico \n");
    } else {
        printf("El arreglo NO es simetrico \n");
    }

}

void lectura(int a[][max], int t){
    int i, j;
    for (i = 0; i < t; i++){
        for (j = 0; j < t; j++){
            printf("Fila: %d Columna: %d \n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

int simetrico(int a[][max], int t){
    int i = 0, j, f = -1;
    while((i < t)&& f){
        j = 0;
        while((j < i)&& f){
            if(a[i][j] == a[j][i]){
                j++;
            } else {
                f = 0;
            }
        }
        i++;
    }
    return f;
}