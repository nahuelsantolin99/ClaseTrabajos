/*
 ============================================================================
 Name        : Tema3ej3.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int determinarParidad(int num);

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int resultado;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	resultado = determinarParidad(numero);

	printf("El resultado es %d", resultado);

	return EXIT_SUCCESS;
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
