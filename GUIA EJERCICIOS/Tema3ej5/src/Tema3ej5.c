/*
 ============================================================================
 Name        : Tema3ej5.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "restas.h"

int main(void)
{
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese numero uno: ");
	scanf("%d", &numeroUno);

	printf("Ingreso numero dos: ");
	scanf("%d", &numeroDos);

	resultado = restar1(numeroUno, numeroDos);

	printf("El resultado de la resta1 es: %d\n", resultado);

	resultado = restar2();

	printf("El resultado de la resta2 es: %d\n", resultado);

	restar3(numeroUno, numeroDos);

	restar4();

	return EXIT_SUCCESS;
}



