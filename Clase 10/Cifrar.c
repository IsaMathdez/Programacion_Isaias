
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() // Se usaran los caracteres dentro del rango 32-126
{
	char frase[100];  //Declarar variables
	int key;
	int i, salto=0;
 
	while(1) // Siempre repite el proceso
	{
		system("cls"); // Limpia la pantalla de la terminal
		printf("Ingresa la frase a cifrar: ");
		fflush(stdin);
		gets(frase); // Obtener la frase
		do{
			printf("Inserta la clave de cifrado: ");
			scanf("%d",&key);
		}while(key<1 || key>10); //Obtener llave, que debe ser una unidad
		printf("\n\n----------------------------------\nFrase cifrada:\n");
 
		for(i=0; i<(int)strlen(frase); i++,salto=0) // mientras i sea menor que el tamaño la frase.
		{
			if(frase[i]>126-key) 
			{
				salto=95; // Se asigna un salto para volver al inicio del ciclo
			}
			printf("%c",frase[i]+key-salto); // Se imprime la letra codificada: sumandole la llave en el codigo ascii, si salto es distinto de 0 se mantendra dentro del rango de simbolos seleccionados
		}
 
		printf("\n\n"); // Espacio
		system("pause"); // Se pide que se persione una tecla para continuar
	}
}

 