// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 7.20
Cadena de mayor longitud */

int longitud(char *cad);

int main(){

    int i, n, l = -1, p, t;
    char cad[50], fra[20][50];
    printf("INgrese el numero de filas del arreglo: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("INgresa la linea %d/%d de texto: \n", i+1, n);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++){
        strcpy(cad, fra[i]);
        t = longitud(cad);
        if(t > 1){
            l = t;
            p = i;            
        }
    }
    printf("La cadena con mayor longitud es: \n");
    puts(fra[p]);
    printf("Longitud: %d \n", l);

}

int longitud(char *cadena){
    int cue = 0;
    while(!cadena[cue] == '\0'){
        cue++;
    }
    return cue;
}