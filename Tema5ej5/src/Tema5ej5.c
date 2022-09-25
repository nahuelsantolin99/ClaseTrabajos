/*
 ============================================================================
 Name        : Tema5ej5.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define TAM 10

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int numeros[TAM];
	int posicion;
	int inicializacion;
	char seguir;
	float promedioPositivos;
	int mayorNegativos;

	inicializacion = inicializarArray(numeros, TAM);

	if(inicializacion == 0)
	{
		do
		{
			do
			{
				printf("Que posicion desea cargar? De 1 a 10: ");
				scanf("%d", &posicion);
			}while(posicion < 1 || posicion > 10);

			utn_getNumero(&numero, "Que numero desea cargar?", "Error. Fuera del rango", -50, 75, 2);

			numeros[posicion - 1] = numero;

			do
			{
				printf("Desea cargar otro numero ? s/n");
				fflush(stdin);
				scanf("%c", &seguir);
			}while(seguir != 's' && seguir != 'n');
		}while(seguir == 's');
	}

	if(promediarPositivosArray(numeros, TAM, &promedioPositivos) == 0)
	{
		printf("El promedio de los positivos del array es %.2f\n", promedioPositivos);
	}
	else
	{
		printf("Error\n");
	}

	if(calcularMayorNegativos(numeros, TAM, &mayorNegativos) == 0)
	{
		printf("El mayor de los negativos es %d\n", mayorNegativos);
	}
	else
	{
		printf("Error\n");
	}

	return EXIT_SUCCESS;
}



