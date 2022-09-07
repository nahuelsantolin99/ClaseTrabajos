/*
 ============================================================================
 Name        : divEnteros.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);

	int numeroA;
	int numeroB;
	float resultado;
	int huboError;

	pedirNumero(&numeroA);
	pedirNumero(&numeroB);

	huboError = dividirEnteros(numeroA, numeroB, &resultado);

	if(huboError == 0)
	{
		printf("El resultado de la division es: %.2f", resultado);
	}
	else
	{
		printf("Error. No se puede dividir por cero");
	}
	return EXIT_SUCCESS;
}
