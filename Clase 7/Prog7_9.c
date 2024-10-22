// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 7.9
Buscar un caracter*/

int cuenta(char *, char);

int main(){

    char car, cad[50];
    int res;
    printf("Ingrese la cadena de caracteres: \n");
    gets(cad);
    fflush(stdin);
    printf("Inrgese el caracter: \n");
    car = getchar();
    res = cuenta(cad, car);
    printf("%c se encuentra %d veces en la cadena: %s \n", car, res, cad);

}

int cuenta(char *cad, char car){
    int i = 0, r = 0;
    while(cad[i] != '\0'){
        if(cad[i] == car){
            r++;
        }
        i++;
    }
    return r;
}