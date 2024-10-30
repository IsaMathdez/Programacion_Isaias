// Programa hecho por Isaias Matos
#include <stdio.h>
#include <string.h>

/* Programa 8.8
Hospital datos */

typedef struct{
    char cal[20];
    int num;
    char col[20];
    char cp[5];
    char ciu[20];
} domicilio;

typedef struct{
    char nom[20];
    int edad;
    char sexo;
    int con;
    domicilio dom;
    char tel[10];
} paciente;

void lectura(paciente *, int);
void f1(paciente *, int);
void f2(paciente *, int);
void f3(paciente *, int);

int main(){

    paciente hospital[100];
    int tam;
    do
    {
        printf("Ingrese el numero de pacientes: \n");
        scanf("%d", &tam);
    } while (tam > 50 || tam < 1);
    lectura(hospital, tam);
    f1(hospital, tam);
    f2(hospital, tam);
    f3(hospital, tam);

}

void lectura(paciente a[], int t){

    int i;
    for (i = 0; i < t; i++){
        printf(" Paciente %d: \n", i+1);
        fflush(stdin);
        printf(" Nombre: \n");
        gets(a[i].nom);
        printf(" Edad: \n");
        fflush(stdin);
        scanf("%d", &a[i].edad);
        printf(" Sexo: \n");
        scanf("%c", &a[i].sexo);
        printf("Condicion (1...5): \n");
        scanf("%d", &a[i].con);
        fflush(stdin);
        printf(" Calle: \n");
        gets(a[i].dom.cal);
        printf(" Numero: \n");
        scanf("%d", &a[i].dom.num);
        fflush(stdin);
        printf(" Colonia: \n");
        gets(a[i].dom.col);
        fflush(stdin);
        printf(" Codigo postal: \n");
        gets(a[i].dom.cp);
        fflush(stdin);
        printf(" Ciudad: \n");
        fflush(stdin);
        gets(a[i].dom.ciu);
        printf(" Telefono: \n");
        gets(a[i].tel);
    }
}

void f1(paciente a[], int t){
    int i, fem, mas, tot;
    for (i = 0; i < t; i++){
        switch (a[i].sexo){
        case 'f':
            fem++;
            break;
        
        case 'm':
            mas++;
            break;
        }
    }
    tot = fem + mas;
    printf("Porcentaje de hombres: %.2f \n", (float)mas/tot *100);
    printf("Porcentaje de mujeres: %.2f \n", (float)fem/tot *100);
    
}

void f2(paciente a[], int t){
    int i, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    for (i = 0; i < t; i++){
        switch (a[i].con){
        case 1:
            c1++;
            break;
        
        case 2:
            c2++;
            break;

        case 3:
            c3++;
            break;

        case 4:
            c4++;
            break;

        case 5:
            c5++;
            break;
        }
    }
    printf("Numero de pacientes en condicion 1: %d \n", c1);
    printf("Numero de pacientes en condicion 2: %d \n", c2);
    printf("Numero de pacientes en condicion 3: %d \n", c3);
    printf("Numero de pacientes en condicion 4: %d \n", c4);
    printf("Numero de pacientes en condicion 5: %d \n", c5);
    
}

void f3(paciente a[], int t){
    int i;
    for (i = 0; i < t; i++){
        if(a[i].con == 5){
            printf("\t Nombre %s \t Telefono %s \n", a[i].nom, a[i].tel);
        }
    }
    
}