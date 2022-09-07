/*
 ============================================================================
 Name        : Tema4ej2bis.c
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
	int resultado;
	int salioTodoBien;

	pedirNumero(&numeroA);
	pedirNumero(&numeroB);

	salioTodoBien = sumarConPuntero(numeroA, numeroB, &resultado);

	if(salioTodoBien == 0)
	{
		printf("El resultado de la suma es: %d", resultado);
	}
	else
	{
		printf("Error");
	}

	return EXIT_SUCCESS;
}
