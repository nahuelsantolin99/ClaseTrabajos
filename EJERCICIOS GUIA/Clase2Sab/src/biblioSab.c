/*
 * biblioSab.c
 *
 *  Created on: 3 sep. 2022
 *      Author: Nahuel
 */

#include <stdio.h>
#include <stdlib.h>

int solicitarNumero(void)
{
	int retornoEntero;

	printf("Ingrese un numero: ");
	scanf("%d", &retornoEntero);

	return retornoEntero;
}

float retornarPromedio(int numeroUno, int numeroDos)
{
	float retornoPromedio;

	retornoPromedio = (float)(numeroUno + numeroDos) / 2;

	return retornoPromedio;
}

int retornarAnalisis(int numeroA)
{
	int retorno;

	if(numeroA > 0)
	{
		retorno = 1;
	}
	else
	{
		if(numeroA < 0)
		{
			retorno = -1;
		}
		else
		{
			retorno = 0;
		}
	}

	return retorno;
}

float promediarAcumulado(int acumulador, int contador)
{
	float promedio;

	promedio = (float)acumulador / contador;

	return promedio;
}

int buscarMenorNegativo(int bandera, int num)
{
	int menor;

	if(bandera == 1)
	{
		menor = num;
		bandera = 0;
	}
	else
	{
		if(num < menor)
		{
			menor = num;
		}
	}

	return menor;
}

