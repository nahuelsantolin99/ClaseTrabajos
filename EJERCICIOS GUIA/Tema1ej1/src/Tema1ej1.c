/*
 ============================================================================
 Name        : ESej1.c
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

	int valorA;
	int valorB;
	int resultado;

	do
	{
		printf("Ingrese el primero numero entero: ");
		scanf("%d", &valorA);
	}while(valorA < -50 || valorA > 100);

	do
	{
		printf("Ingrese el segundo numero entero: ");
		scanf("%d", &valorB);
	}while(valorB < -50 || valorB > 100);

	resultado = valorA + valorB;

	printf("El resultado de %d y %d es: %d", valorA,valorB,resultado);

	return EXIT_SUCCESS;
}
