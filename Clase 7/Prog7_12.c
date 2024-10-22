// Programa hecho por Isaias Matos
#include <stdio.h>
#include <ctype.h>

/* Programa 7.12
Total de mayusculas y minusculas*/

int main(){

    char cad[50];
    int i = 0, mi = 0, ma = 0;
    printf("Ingrese la cadena de caracteres max 50: \n");
    gets(cad);
    while(cad[i] != '\0'){
        if(islower(cad[i])){
            mi++;
        } else if (isupper(cad[i])){
            ma++;
        }
        i++;
    }
    printf("NUmero de letras minusculas: %d \n", mi);
    printf("NUmero de letras mayusculas: %d \n", ma);

}