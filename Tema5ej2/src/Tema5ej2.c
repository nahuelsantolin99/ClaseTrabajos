/*
 ============================================================================
 Name        : Tema5ej2.c
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

	int enteros[5];
	float retorno;

	cargarArrayEnteros(enteros, TAM);

	retorno = calcularYRetornarPromedio(enteros, TAM);

	printf("El promedio de los valores del array es %.2f", retorno);

	return EXIT_SUCCESS;
}
