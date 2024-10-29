// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.3
EStructuras anidadas */

typedef struct{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void lectura(struct empleado *a){
    printf("INgrese el nombre del empleado: \n");
    gets(a->nombre);
    printf("INgrese el departamento de la empresa: \n");
    gets(a->departamento);
    printf("INgrese el sueldo del empleado: \n");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("INgrese La direccion del empleado: \n");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);
    printf("\tNumero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCodigo postal: ");
    scanf("%d", &a->direccion.cp);
    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}

int main(){

    struct empleado e0 = {"Arturo", "compras", 15500.75, "San jeronimo", 120, 3490, "Toluca"};
    struct empleado *e1, *e2, e3, e4, e11, e22;

    e1 = &e11;
    printf("INgrese nombre del empleado 1: \n");
    scanf("%s", &(*e1).nombre);
    fflush(stdin);
    printf("Ingrese el departamento: \n");
    gets(e1->departamento);
    printf("Ingrese el sueldo del empleado: \n");
    scanf("%f", &e1->sueldo);
    printf("Ingrese la direccion del empleado: \n");
    printf("\t Calle: ");
    fflush(stdin);
    gets(e1->direccion.calle);
    printf("\t NUmero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\t Codigo postal: ");
    scanf("%d", &e1->direccion.cp);
    printf("\t Localidad: ");
    fflush(stdin);
    gets(e1->direccion.localidad);

    printf("INgrese nombre del empleado 3: \n");
    scanf("%s", &e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento: \n");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: \n");
    scanf("%f", &e3.sueldo);
    printf("Ingrese la direccion del empleado: \n");
    printf("\t Calle: ");
    fflush(stdin);
    gets(e3.direccion.calle);
    printf("\t NUmero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\t Codigo postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\t Localidad: ");
    fflush(stdin);
    gets(e3.direccion.localidad);

    e2 = &e22;
    lectura(e2);
    lectura(&e4);

    printf("Datos del empleado 1: \n");
    printf("%s \t %s \t %.2f \t %s \t %d \t %d \t %s", e1->nombre, e1->departamento, e1->sueldo, e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);

    printf("Datos del empleado 4: \n");
    printf("%s \t %s \t %.2f \t %s \t %d \t %d \t %s", e4.nombre, e4.departamento, e4.sueldo, e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad); 

}