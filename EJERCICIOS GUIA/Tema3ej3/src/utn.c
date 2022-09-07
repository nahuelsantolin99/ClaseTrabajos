/*
 * utn.c
 *
 *  Created on: 6 sep. 2022
 *      Author: Nahuel
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarEntero(int numeroEntero)
{
	printf("Ingreso %d", numeroEntero);
}

float retornarFlotante(void)
{
	float flotante;

	printf("Ingrese un flotante: ");
	scanf("%f", &flotante);

	return flotante;
}

int determinarParidad(int num)
{
	int retorno;

	if(num % 2 == 0)
	{
		retorno = 1;
	}
	else
	{
		retorno = 0;
	}

	return retorno;
}


