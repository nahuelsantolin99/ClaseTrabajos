/*
 ============================================================================
 Name        : Tema4ej1.c
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
	int i;
	int factorial = 1;

	pedirNumero(&numero);

	for(i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}

	printf("El factorial de %d es %d", numero, factorial);

	return EXIT_SUCCESS;
}
