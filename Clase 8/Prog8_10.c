// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.10
Vendedores */

typedef struct{
    char nuba[10];
    char nucu[10];
} banco;

typedef union{
    banco che;
    banco nomi;
    char venta;
} fpago;

typedef struct{
    char cnu[20];
    char col[20];
    char cp[5];
    char ciu[15];
} domicilio;

typedef struct{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
} vendedor;

void lectura(vendedor *, int);
void f1(vendedor *, int);
void f2(vendedor *, int);
void f3(vendedor *, int);
void f4(vendedor *, int);

int main(){

    vendedor vendedores[100];
    int tam;
    do
    {
        printf("Ingrese el numero de vendores: \n");
        scanf("%d", &tam);
    } while (tam > 100 || tam < 1);
    lectura(vendedores, tam);
    f1(vendedores, tam);
    f2(vendedores, tam);
    f3(vendedores, tam);
    f4(vendedores, tam);
    printf("Fin del Programa :D > -- < ");

}

void lectura(vendedor a[], int t){
    int i, j;
    for (i = 0; i < t; i++){
        printf("Ingrese los datos del vendedor %d \n", i+1);
        printf("NUmero de vendedor: \n");
        scanf("%d", &a[i].num);
        printf("Nombre del vendedor: \n");
        fflush(stdin);
        gets(a[i].nom);
        printf("Ventas del año: \n");
        for (j = 0; j < 12; j++){
            printf("Mes %d: \n", j+1);
            scanf("%f", &a[i].ven[j]);
        }
        printf("Domicilio del vendedor: \n");
        printf(" Calle y numero: \n");
        fflush(stdin);
        gets(a[i].domi.cnu);
        printf(" Colonia: \n");
        fflush(stdin);
        gets(a[i].domi.col);
        printf(" Codigo Postal: \n");
        fflush(stdin);
        gets(a[i].domi.cp);
        printf(" Ciudad: \n");
        fflush(stdin);
        gets(a[i].domi.ciu);
        printf("Salario del vendedor: \n");
        scanf("%f", &a[i].sal);
        printf("Forma de pago (Banco - 1 / Nomina - 2 / Ventanilla - 3): \n");
        scanf("%d", &a[i].cla);
        switch (a[i].cla)
        {
        case 1:
            printf(" Nombre del Banco: \n");
            fflush(stdin);
            gets(a[i].pago.che.nuba);
            printf(" NUmero de cuenta: \n");
            fflush(stdin);
            gets(a[i].pago.che.nucu);
            break;
        
        case 2:
            printf(" Nombre del Banco: \n");
            fflush(stdin);
            gets(a[i].pago.nomi.nuba);
            printf(" NUmero de cuenta: \n");
            fflush(stdin);
            gets(a[i].pago.nomi.nucu);
            break;

        case 3:
            a[i].pago.venta = '$';
            break;
        }
    }
}

void f1(vendedor a[], int t){
    int i, j;
    float sum;
    printf("\n Ventas totales de los vendedores: \n");
    for (i = 0; i < t; i++){
        printf(" Vendedor %d: \n", a[i].num);
        sum = 0.0;
        for (j = 0; j < 12; j++){
            sum += a[i].ven[j];
        }
        printf(" Ventas: %.2f \n", sum);
    }
}

void f2(vendedor a[], int t){
    int i, j;
    float sum;
    printf("Incremento a los vendedores con Ventas > 1,500,000 $: \n");
    for (i = 0; i < t; i++){
        sum = 0.0;
        for (j = 0; j < 12; j++){
            sum += a[i].ven[j];
        }
        if(sum > 1500000){
            a[i].sal = a[i].sal * 1.05;
            printf(" Numero de empleado: %d \n Ventas: %.2f \n Nuevo salario: %.2f \n", a[i].num, sum, a[i].sal);
        }
    }
}

void f3(vendedor a[], int t){
    int i, j;
    float sum;
    printf("\t Vendedores con ventas < 300,000 \n");
    for (i = 0; i < t; i++){
        sum = 0.0;
        for (j = 0; j < 12; j++){
            sum += a[i].ven[j];
        }
        if(sum < 300000.0){
            printf("\n NUmero de empleado: %d \n Nombre: %s \n Ventas: %.2f \n", a[i].num, a[i].nom, sum);
        }
    }
}

void f4(vendedor a[], int t){
    int i;
    printf("\t Vendedores con Cuenta en el Banco: \n");
    for (i = 0; i < t; i++){
        if(a[i].cla == 1){
            printf("\n NUmero de vendedor: %d \n Banco: %s \n Cuenta: %s \n", a[i].num, a[i].pago.che.nuba, a[i].pago.che.nucu);
        }
    }
}