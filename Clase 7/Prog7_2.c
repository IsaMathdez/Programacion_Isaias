// Programa hecho por Isaias Matos
#include <stdio.h>
#include <ctype.h>

/* Programa 7.2
Funciones para manejo de cararcteres*/

int main(){

    char p1;
    printf("INgrese un caracter para analizar si este es un digito \n");
    p1 = getchar();
    if (isdigit(p1)){
        printf("%c es un digito \n", p1);
    } else {
        printf("%c NO es un digito \n", p1);
    }
    fflush(stdin);
    printf("INgrese un caracter para analizar si este es una letra \n");
    p1 = getchar();
    if(isalpha(p1)){
        printf("%c es una letra \n", p1);
    } else {
        printf("%c NO es una letra \n", p1);
    }
    fflush(stdin);
    printf("INgrese un caracter para examinar si este es una letra minuscula \n");
    p1 = getchar();
    if(isalpha(p1)){
        if(islower(p1)){
            printf("%c es una letra minucula\n", p1);
        } else {
            printf("%c NO es una letra minucula\n", p1);
        }
    } else {
        printf("%c NO es una letra \n", p1);
    }
    fflush(stdin);
    printf("INgrese una letra para convertirla de mayuscula a minuscula \n");
    p1 = getchar();
    if(isalpha(p1)){
        if(isupper(p1)){
            printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1));
        } else {
            printf("%c NO es una letra minucula\n", p1);
        }
    } else {
        printf("%c NO es una letra \n", p1);
    }

}