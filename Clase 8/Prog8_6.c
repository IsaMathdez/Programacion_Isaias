// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.6
Ventas e inventario */

typedef struct {
    int clave;
    char nombre[20];
    float precio;
    int existencia;
} producto;

void lectura(producto *, int);
void ventas(producto *, int);
void rebastecimiento(producto *, int);
void nuevos_productos(producto *, int *);
void inventario(producto *, int);

int main(){

    producto inv[100];
    int tam, ope;
    do
    {
        printf("Ingrese el numero de productos: \n");
        scanf("%d", &tam);
    } while (tam > 100 || tam < 1);
    lectura(inv, tam);
    printf("Ingrese operacion a realizar \n \tt1- Ventas \tt2_ Reabastecimiento \tt3- NUevos productos \tt4- Inventario \t 0- Salir \n");
    scanf("%d", &ope);
    while(ope){
        switch (ope){
        case 1:
            ventas(inv, tam);
            break;
        
        case 2:
            rebastecimiento(inv, tam);
            break;

        case 3:
            nuevos_productos(inv, &tam);
            break;

        case 4:
            inventario(inv, tam);
            break;
        }
        printf("Ingrese operacion a realizar \n \tt1- Ventas \tt2_ Reabastecimiento \tt3- NUevos productos \tt4- Inventario \t 0- Salir \n");
        scanf("%d", &ope);
    }

}

void lectura(producto a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf("Ingrese info del producto: \n");
        printf("\t Clave: ");
        scanf("%d", &a[i].clave);
        fflush(stdin);
        printf("\t Nombre: ");
        gets(a[i].nombre);
        printf("\t Precio: ");
        scanf("%f", &a[i].precio);
        printf("\t Existencia: ");
        scanf("%d", &a[i].existencia);
    }
    
}

void ventas(producto a[], int t){
    int cla, can, i, res;
    float tot, par;
    printf("Ingrese la clave del producto - 0 para salir: \n");
    scanf("%d", &cla);
    tot = 0.0;
    while (cla){
        printf("\t Cantidad: ");
        scanf("%d", &can);
        i = 0;
        while((i<t)&&(a[i].clave<cla)){
            i++;
        }
        if((i == t)||(a[i].clave>cla)){
            printf("La clave del producto es incorrecta \n"); 
        } else {
            if(a[i].existencia >= can){
                a[i].existencia = can;
                par = a[i].precio * can;
                tot += par;
            } else {
                printf("No exite en inventario la cantidad solicitada, solo hay %d \n", a[i].existencia);
                printf("Los lleva? 1 - Si  0 - No \n");
                scanf("%d", &res);
                if(res){
                    par = a[i].precio * a[i].existencia;
                    a[i].existencia = 0;
                    tot += par;
                }
            }
        }
        printf("Ingrese otra siguiente clave del producto  0 para salir: \n");
        scanf("%d", &cla);
    }
    printf("Total de la venta: %.2f \n", tot);   
}

void rebastecimiento(producto a[], int t){
    int cla, can, i;
    printf("Ingrese clave del producto, 0 para salir: \n");
    scanf("%d", &cla);
    while(cla){
        i = 0;
         while((i<t)&&(a[i].clave<cla)){
            i++;
        }
        if((i == t)||(a[i].clave>cla)){
            printf("La clave del producto es incorrecta \n"); 
        } else {
            printf("\t Cantidad: ");
            scanf("%d", &can);
            a[i].existencia += can;
        }
        printf("Ingrese otra clave del producto, 0 para salir: \n");
        scanf("%d", &cla);
    }
}

void nuevos_productos(producto a[], int *t){
    int cla, i, j;
    printf("Ingrese clave del producto, 0 para salir: \n");
    scanf("%d", &cla);
    while((*t < 30)&&(cla)){
        i = 0;
        while((i < *t)&&(a[i].clave < cla)){
            i++;
        }
        if(i == *t){
            a[i].clave = cla;
            printf("\t Nombre: ");
            fflush(stdin);
            gets(a[i].nombre);
            printf("\t Precio: ");
            scanf("%f", &a[i].precio);
            printf("\t Cantidad: ");
            scanf("%d", &a[i].existencia);
        } else {
            if(a[i].clave == cla){
                printf("El producto ya se encuentra. \n");
            } else {
                for (j = *t; j < i; j++){
                    a[j] = a[j-1];
                }
                printf("\t Nombre: ");
                fflush(stdin);
                gets(a[i].nombre);
                printf("\t Precio: ");
                scanf("%f", &a[i].precio);
                printf("\t Cantidad: ");
                scanf("%d", &a[i].existencia);
                *t = *t +1;
            }
            printf("Ingrese otro clave del producto, 0 para salir: \n");
            scanf("%d", &cla);
        }
    }
    if(*t == 30){
        printf("Ya no hay espacio para incorporar nuevos productos");
    }
}

void inventario(producto a[], int t){
    int i;
    for (i = 0; i < t; i++){
        printf(" Clave: %d \n", a[i].clave);
        printf(" Nombre: %s \n", a[i].nombre);
        printf(" Precio: %.2f \n", a[i].precio);
        printf(" Existencia: %d \n", a[i].existencia);
    }
    
}
// 185 lineas :D