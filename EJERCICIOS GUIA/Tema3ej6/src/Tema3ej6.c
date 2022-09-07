/*
 ============================================================================
 Name        : Tema3ej6.c
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

	int numero1;
	float resultado;

	do
	{
		printf("Ingrese numero entre 10 y 100: ");
		scanf("%d", &numero1);
	}while(numero1 < 10 || numero1 > 100);

	resultado = realizarDiezPorCientoDescuento(numero1);

	printf("El resultado con el descuento es: %.2f", resultado);

	return EXIT_SUCCESS;
}
