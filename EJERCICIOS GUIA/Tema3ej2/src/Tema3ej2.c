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
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);

	float valorRetornado;

	valorRetornado = retornarFlotante();

	printf("El flotante es: %.2f", valorRetornado);

	return EXIT_SUCCESS;
}




