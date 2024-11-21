// Programa hecho por Isaias Matos
#include <stdio.h>
#include <stdlib.h>

/* Programa que recibe el nombre de un archivo
Lo crea si no existe
Si existe lo abre y muestra en pantalla
Luego yo añadi la opcion de poder escribir nuevo texto en el arhivo
Y leerlo con los nuevos cambios 
*/

void escribir(char *);
void leer(char *);

void LeerArchivo(const char *archivo){
    FILE *arc = fopen(archivo, "r");
    if(arc == NULL){
        arc = fopen(archivo, "w");
        if(arc == NULL){
        printf("NO se pudo abrir el archivo");
        return;
        }
        fprintf(arc, "Se creo el archivo \n");
        fclose(arc);
        printf("Creado un archivo nuevo: %s \n", archivo);
    } else {
        char linea[256];
        printf("Contenido del archivo: \n");
        while(fgets(linea, sizeof(linea), arc)){
            printf("%s", linea);
        }
        fclose(arc);
    }
}

int main(){

    char a[50];
    int op;
    printf("Dame el nombre del archivo de texto: \n");
    gets(a);
    const char *archivo = a;
    LeerArchivo(archivo);
    printf("\n----------------------------------------");
    do{
        printf("\nSi desea escribrir en el archivo escriba 1\nSi desea verlo escriba 2\nEscriba 0 para finalizar \n");
        scanf("%d", &op);
        switch (op){
        case 1:
            escribir(a);
            break;

        case 2:
            leer(a);
            break;

        case 0:
            printf("Fue un placer! \n");
            break;

        default:
        printf("Invalido");
            break;
    }
    } while (op);

}

void escribir(char ab[50]){

    char cad[50];
    int res;
    FILE *ar;
    if((ar = fopen(ab, "a")) != NULL){
        printf("Desea ingresar una cadena de caracteres?  Si - 1  No - 0 \n");
        scanf("%d", &res);
        fputs("\n", ar);
        while(res){
            fflush(stdin);
            printf("Ingrese la cadena: \n");
            gets(cad);
            fputs(cad, ar);
            printf("Desea ingresar otra cadena? Si - 1  No - 0 \n");
            scanf("%d", &res);
            if(res){
                fputs("\n", ar);
            }
        }
        fclose(ar);
    } else {
        printf("No se puede abrir el archivo");
    }
    
}

void leer(char ab[50]){

    char cad[50];
    FILE *ap;
    if((ap = fopen(ab, "r")) != NULL){
        while(!feof(ap)){
            fgets(cad, 50, ap);
            puts(cad);
        }
        fclose(ap);
    } else {
        printf("No se puede abrir el archivo");
    }
    
}