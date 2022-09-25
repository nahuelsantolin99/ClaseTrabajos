/*
 ============================================================================
 Name        : Clase5yt.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define TAM 5

int promediarArray(int array[], int cantidadElementos, float* pPromedio);

int main(void)
{
	setbuf(stdout,NULL);

	int edad;
	int edades[TAM];
	int i;
	float promedio;
	int huboError;

	for(i = 0; i < TAM; i++)
	{
		if(utn_getNumero(&edad, "Ingrese edad", "Error. Edad no valida", 0, 100, 2) == 0)
		{
			edades[i] = edad;
		}
		else
		{
			printf("ERROR");
		}

	}

	for(i = 0; i < TAM; i++)
	{
		printf("Ingreso %d años en la posicion %d\n", edades[i], i);
	}

	huboError = promediarArray(edades, TAM, &promedio);

	if(huboError == 0)
	{
		printf("El promedio es %.2f", promedio);
	}
	else
	{
		printf("No se pudo calcular el promedio");
	}

	return EXIT_SUCCESS;
}

int promediarArray(int array[], int cantidadElementos, float* pPromedio)
{
	int retorno = -1;
	int i;
	int acumuladorArray = 0;

	if(array != NULL && pPromedio != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			acumuladorArray = acumuladorArray + array[i];
		}

		*pPromedio = (float)acumuladorArray / cantidadElementos;
		retorno = 0;
	}

	return retorno;
}

