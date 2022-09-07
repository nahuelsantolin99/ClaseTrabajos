/*
 ============================================================================
 Name        : Tema3ej7.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	char operacion;
	int resultado;

	do
	{
		printf("Ingrese numero uno: ");
		scanf("%d", &numero1);
	}while(numero1 < 10 || numero1 > 100);

	do
	{
		printf("Ingrese numero dos: ");
		scanf("%d", &numero2);
		fflush(stdin);
	}while(numero2 < 10 || numero2 > 100);

	do
	{
		printf("Ingrese 's' para sumar, 'r' para restar: ");
		scanf("%c", &operacion);
		fflush(stdin);
	}while(operacion != 's' && operacion != 'r');

	resultado = realizarOperacion(numero1, numero2, operacion);

	printf("El resultado de la operacion elegida es: %d", resultado);

	return EXIT_SUCCESS;
}

