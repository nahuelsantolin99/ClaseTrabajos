/*
 ============================================================================
 Name        : Tema5ej3.c
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
	int maximo;

	cargarArrayEnteros(enteros, TAM);

	if(calcularMaximo(enteros, TAM, &maximo) == 0)
	{
		printf("El valor maximo del array es %d", maximo);
	}
	else
	{
		printf("Algo no salio bien");
	}

	return EXIT_SUCCESS;
}
