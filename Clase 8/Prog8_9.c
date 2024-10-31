// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.9
Bienes raices datos */

typedef struct{
    char zona[20];
    char calle[20];
    char colo[20];
} ubicacion;

typedef struct{
    char clave[5];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float precio;
    char dispo;
} propiedades;

void lectura(propiedades *, int);
void f1(propiedades *, int);
void f2(propiedades *, int);

int main(){

    propiedades propie[100];
    int tam;
    do
    {
        printf("Ingrese el numero de propiedades: \n");
        scanf("%d", &tam);
    } while (tam > 100 || tam < 1);
    lectura(propie, tam);
    f1(propie, tam);
    f2(propie, tam);

}

void lectura(propiedades a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("INgrese datos de la propiedad %d: \n", i+1);
        printf(" Clave: \n");
        fflush(stdin);
        gets(a[i].clave);
        printf(" Superficie cubierta: \n");
        scanf("%f", &a[i].scu);
        printf(" Superficie terreno: \n");
        scanf("%f", &a[i].ste);
        printf(" Caracteristicas: \n");
        fflush(stdin);
        gets(a[i].car);
        printf(" Zona: \n");
        fflush(stdin);
        gets(a[i].ubi.zona);
        printf(" Calle: \n");
        fflush(stdin);
        gets(a[i].ubi.calle);
        printf(" Colonia: \n");
        fflush(stdin);
        gets(a[i].ubi.colo);
        printf(" Precio: \n");
        scanf("%f", &a[i].precio);
        printf(" Disponibilidad (Venta - v / Renta - r): \n");
        scanf("%c", &a[i].dispo);
    }
    
}

void f1(propiedades a[], int t){
    int i;
    printf("\t Listado de Propiedades para venta en Miraflores: \n");
    for (i = 0; i < t; i++){
        if((a[i].dispo == 'v') && (strcmp(a[i].ubi.zona, "Miraflores") == 0)){
            if((a[i].precio >= 450000) && (a[i].precio <= 650000)){
                printf(" Clave de la propiedad: \n");
                puts(a[i].clave);
                printf("Superficie cubierta: %.2f \n", a[i].scu);
                printf("Superficie terreno: %.2f \n", a[i].ste);
                printf("Caracteristicas: \n");
                puts(a[i].car);
                printf("Calle: \n");
                puts(a[i].ubi.calle);
                printf("Colonia: \n");
                puts(a[i].ubi.colo);
                printf("Precio: %.2f \n", a[i].precio);
            }
        }
    }
}

void f2(propiedades a[], int t){
    int i;
    float li, ls;
    char zon[20];
    printf("Listado de Propiedades para Renta: \n");
    printf("INgrese Zona geografica: \n");

    gets(zon);
    printf("INgrese el limite inferior del precio: \n");
    scanf("%f", &li);
    printf("Ingrese el limite superior del recio: \n");
    scanf("%f", &ls);
    for (i = 0; i < t; i++){
        if((a[i].dispo == 'r') && (strcmp(a[i].ubi.zona, zon) == 0)){
            if((a[i].precio > li) && (a[i].precio <= ls)){
                printf(" Clave de la propiedad: \n");
                puts(a[i].clave);
                printf("Superficie cubierta: %.2f \n", a[i].scu);
                printf("Superficie terreno: %.2f \n", a[i].ste);
                printf("Caracteristicas: \n");
                puts(a[i].car);
                printf("Calle: \n");
                puts(a[i].ubi.calle);
                printf("Colonia: \n");
                puts(a[i].ubi.colo);
                printf("Precio: %.2f \n", a[i].precio);
            }
        }
    }
    
}