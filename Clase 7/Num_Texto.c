// Programa hecho por Isaias Matos
#include <stdio.h>
#include <stdlib.h>

/* Programa recibe una cantidad y la devuelve en palabras*/

void numeroALetras(int numero);
void repetirPrograma();

int main() {
    repetirPrograma();
    return 0;
}

void repetirPrograma() {
    int opcion;
    double numero;
    int parteEntera;
    int centavos;

    do {
        printf("Introduce una cantidad (Menor que 10 mil): \n");
        scanf("%lf", &numero);
        
        parteEntera = (int)numero;
        centavos = (int)((numero - parteEntera) * 100); // Obtener decimales

        printf("El numero es: \n");
        numeroALetras(parteEntera); //Solo se le da la parte entera a la funcion
        printf(" con %d centavos. \n", centavos); // Se le añade los centavos

        printf("Deseas convertir otro numero? (1: Si): \n");
        scanf("%d", &opcion);

    } while (opcion == 1 && numero < 10000);
    printf("¡Fue un placer!\n");
}

void numeroALetras(int numero) {
    
    char *unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    char *centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    char *miles[] = {"", "mil", "dos mil", "tres mil", "cuatro mil", "cinco mil", "seis mil", "siete mil", "ocho mil", "nueve mil"};

    if (numero < 10) {
        printf("%s", unidades[numero]);
    } else if (numero < 100) {
        printf("%s", decenas[numero / 10]);
        if (numero % 10 > 0) {
            printf(" y %s", unidades[numero % 10]);
        }
    } else if (numero < 1000) {
        printf("%s", centenas[numero / 100]);
        int resto = numero % 100;
        if (resto > 0) {
            printf(" ");
            numeroALetras(resto);
        }
    } else if (numero < 10000) {
        printf("%s", miles[numero / 1000]);
        int rest = numero % 1000;
        if (rest > 0){
            printf(" ");
            numeroALetras(rest);
        }
    }
}
