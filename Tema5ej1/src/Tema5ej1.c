/*
 ============================================================================
 Name        : Tema5ej1.c
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

int main(void)
{
	setbuf(stdout,NULL);

	int enteros[TAM];
	int acumuladorEnteros = 0;

	cargarArrayEnteros(enteros, TAM);

	if(sumarEnteros(enteros, TAM, acumuladorEnteros, &acumuladorEnteros) == 0)
	{
		printf("La suma de los enteros es %d\n", acumuladorEnteros);
	}

	imprimirImpares(enteros, TAM);

	return EXIT_SUCCESS;
}





