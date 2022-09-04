/*
 ============================================================================
 Name        : Tema1ej2.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int i;
	int flagMayor = 1;
	int mayor;
	int posicion;

	for(i = 0; i < 3; i++)
	{
		printf("Ingrese numero: ");
		scanf("%d", &numero);

		if(flagMayor == 1)
		{
			mayor = numero;
			flagMayor = 0;
			posicion = i + 1;
		}
		else
		{
			if(numero > mayor)
			{
				mayor = numero;
				posicion++;
			}
		}

	}

	printf("El mayor de los numeros es %d y su posicion es %d", mayor,posicion);

	return EXIT_SUCCESS;
}
