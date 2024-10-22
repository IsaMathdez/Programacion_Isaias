// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 7.3
Cadena de caracteres*/

int main(){
    char *cad0 = "Buenos dias";
    char cad1[20] = "Hola";
    char cad2[] = "Mexico";
    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', 's', '\0'};
    char cad4[20], cad5[20], cad6[20];

    printf("La cadena 0 es: ");
    puts(cad0);
    printf("La cadena 1 es: ");
    printf("%s \n", cad1);
    printf("La cadena 2 es: ");
    puts(cad2);
    printf("La cadena 3 es: ");
    puts(cad3);

    printf("Ingrese una linea de texto: \n");
    gets(cad4);
    printf("La cadena 4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("Ingrese otra linea de texto: \n");
    scanf("%s", cad5);
    printf("La cadena 5 es: %s \n", cad5);
    fflush(stdin);

    char p;
    int i = 0;
    printf("Ingrese otra linea de texto: \n");
    while ((p = getchar() != '\0')){
        cad6[i++] = p;
        cad6[i] = '\0';
    }
    printf("La cadena 6 es: ");
    puts(cad6);

}