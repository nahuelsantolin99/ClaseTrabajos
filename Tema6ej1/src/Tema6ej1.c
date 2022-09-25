/*
 ============================================================================
 Name        : Tema6ej1.c
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

	int valorA;
	int valorB;
	int bufferSwap;

	utn_getNumero(&valorA, "Ingrese valorA", "Error", 0, 100, 2);
	utn_getNumero(&valorB, "Ingrese valorB", "Error", 0, 100, 2);

	printf("ValorA: %d\n", valorA);
	printf("ValorB: %d\n", valorB);

	bufferSwap = valorA;
	valorA = valorB;
	valorB = bufferSwap;

	printf("\nValorA pos swap: %d\n", valorA);
	printf("ValorB pos swap: %d\n", valorB);

	return EXIT_SUCCESS;
}
