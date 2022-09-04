/*
 ============================================================================
 Name        : Tema3ej2.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float retornarFlotante(void);

int main(void)
{
	setbuf(stdout,NULL);

	float valorRetornado;

	valorRetornado = retornarFlotante();

	printf("El flotante es: %.2f", valorRetornado);

	return EXIT_SUCCESS;
}

float retornarFlotante(void)
{
	float flotante;

	printf("Ingrese un flotante: ");
	scanf("%f", &flotante);

	return flotante;
}

