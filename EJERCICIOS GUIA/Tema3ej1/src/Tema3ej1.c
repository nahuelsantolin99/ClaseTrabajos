/*
 ============================================================================
 Name        : Tema3ej1.c
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

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	mostrarEntero(numero);

	return EXIT_SUCCESS;
}

