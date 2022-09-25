/*
 ============================================================================
 Name        : Tema3ej4.c
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
	float flotanteRetornado;

	printf("Ingrese un numero entre 0 y 50: ");
	scanf("%d", &numero);

	mostrarEntero(numero);

	flotanteRetornado = retornarFlotante();

	printf("El numero flotante ingresado es: %.2f", flotanteRetornado);

	return EXIT_SUCCESS;
}
