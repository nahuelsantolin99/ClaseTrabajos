/*
 ============================================================================
 Name        : Tema4ej2.c
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

	int num1;
	int num2;
	int resultado;
	int devolucion;

	printf("Ingrese num1: ");
	scanf("%d", &num1);

	printf("Ingrese num2: ");
	scanf("%d", &num2);

	devolucion = sumarConPuntero(num1, num2, &resultado);

	if(devolucion == 0)
	{
		printf("El resultado de la suma es: %d", resultado);
	}

	return EXIT_SUCCESS;
}



