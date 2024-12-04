// Programa hecho por Isaias Matos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Programa que crea y abre archivos de la estructura Alumno, ya existen tres archivos hechos a los cuales se puede acceder y agregarle datos, se pueden crear mas */

// Definición de la estructura Alumno
typedef struct {
    char nombre[50];
    float promedio;
    char carrera[50];
} Alumno;

// Prototipos de funciones
void nuevoArchivo();
void abrirArchivo();
void Leer(FILE *);
void agregarRegistro();
void buscarRegistro();
void buscarNombre();

int main() {
    int opcion;
    do { // Menu
        printf("\n Menu:\n");
        printf("1. Nuevo Archivo\n");
        printf("2. Abrir Archivo\n");
        printf("3. Agregar Registro\n");
        printf("4. Buscar por Renglon\n");
        printf("5. Buscar por Nombre\n");
        printf("6. Salir \n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar();

        switch(opcion) {
            case 1:
                nuevoArchivo();
                break;
            case 2:
                abrirArchivo();
                break;
            case 3:
                agregarRegistro();
                break;
            case 4:
                buscarRegistro();
                break;
            case 5:
                buscarNombre();
                break;
            case 6:
                printf(" Fue un placer :D\n");
                break;
            default:
                printf("Incorrecto \n");
                break;
        }
    } while(opcion != 6);

    return 0;
}

void nuevoArchivo() {
    FILE *file;
    char nombreArchivo[50];
    printf("Introduce el nombre del nuevo archivo: ");
    scanf("%s", nombreArchivo);
    file = fopen(nombreArchivo, "wb"); //Crea el archivo del nombre dado
    if (file == NULL) {
        printf("Error al crear el archivo.\n");
        return;
    }
    printf("Archivo '%s' creado exitosamente.\n", nombreArchivo);
    fclose(file);
}

void abrirArchivo() {
    FILE *file;
    char nombreArchivo[50];
    printf("Introduce el nombre del archivo a abrir: ");
    scanf("%s", nombreArchivo);
    file = fopen(nombreArchivo, "rb+"); //Abre el archivo para leer SOLO SI existe
    if (file == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    printf("Archivo '%s' abierto exitosamente.\n", nombreArchivo);
    printf("\n--------- Contenido -----------\n");
    Leer(file); // Muestra el contenido del archivo
    printf("--------- Fin Contenido -----------\n");
    fclose(file);
}

void Leer(FILE *ap){ // Funcion que lee
    Alumno alu;
    fread(&alu, sizeof(Alumno), 1, ap);
    while(!feof(ap)){
        puts(alu.nombre);
        printf("Promedio: %.2f \n", alu.promedio);
        puts(alu.carrera);
        fread(&alu, sizeof(Alumno), 1, ap);
    }
}

void agregarRegistro() { //Agrega nuevos registros (alumnos)
    FILE *file;
    char nombreArchivo[50];
    Alumno alumno;
    printf("Introduce el nombre del archivo para agregar datos: ");
    scanf("%s", nombreArchivo);
    file = fopen(nombreArchivo, "ab+"); //Abre el archivo para agregar datos, si no existe lo crea
    if (file == NULL) {
        printf("Error al guardar el archivo.\n");
        return;
    }
    printf("Introduce los datos del nuevo alumno:\n");
    printf("Nombre: ");
    fflush(stdin);
    gets(alumno.nombre);
    printf("Promedio: ");
    scanf("%f", &alumno.promedio);
    printf("Carrera: ");
    fflush(stdin);
    gets(alumno.carrera);
    fwrite(&alumno, sizeof(Alumno), 1, file);
    printf("Datos guardados exitosamente en '%s'.\n", nombreArchivo);
    fclose(file);
}

void buscarRegistro() { //Busca un registro por indice dentro del archivo
    FILE *file;
    char nombreArchivo[50];
    Alumno alumno;
    int renglon, i = 0;
    printf("Introduce el nombre del archivo a buscar: ");
    scanf("%s", nombreArchivo);
    file = fopen(nombreArchivo, "rb"); //Abre archivo para leer SOLO SI existe
    if (file == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    printf("Introduce el indice de renglon a buscar: ");
    scanf("%d", &renglon);
    
    printf("\n------- Contenido Renglon %d --------\n", renglon);
    while (fread(&alumno, sizeof(Alumno), 1, file)) {
        if (i == renglon - 1) {
            printf("Nombre: %s\n", alumno.nombre);
            printf("Promedio: %.2f\n", alumno.promedio);
            printf("Carrera: %s\n", alumno.carrera);
            break;
        }
        i++;
    }
    printf("--------- Fin Contenido -----------\n");
    if (i != renglon - 1) {
        printf("Renglon no encontrado.\n");
    }
    fclose(file);
}

void buscarNombre() { 
    FILE *file; 
    char nombreArchivo[50]; 
    char nombreBuscar[50]; 
    Alumno alumno; 
    int encontrado = 0; 
    printf("Introduce el nombre del archivo: "); 
    scanf("%s", nombreArchivo); 
    file = fopen(nombreArchivo, "rb"); //Abre en lectura
    if (file == NULL) { 
        printf("Error al abrir el archivo.\n");
        return; 
        } 
    printf("Introduce el nombre a buscar: "); 
    fflush(stdin);
    gets(nombreBuscar); 
    while (fread(&alumno, sizeof(Alumno), 1, file)) { //Lee la estructura
        if (strcmp(alumno.nombre, nombreBuscar) == 0) { // Compara las cadenas
            printf("Registro encontrado:\n"); 
            printf("------------------\n");
            printf("Nombre: %s\n", alumno.nombre); 
            printf("Promedio: %.2f\n", alumno.promedio); 
            printf("Carrera: %s\n", alumno.carrera); 
            encontrado = 1; 
            break;
            } 
    } 
    if (!encontrado) { 
         printf("Nombre '%s' no encontrado en el archivo.\n", nombreBuscar);
    } 
    fclose(file); 
    }

// Fue un placer :D