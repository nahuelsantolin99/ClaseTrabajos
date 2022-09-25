/*
 ============================================================================
 Name        : pedirNumero.c
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
	int salioTodoBien;

	salioTodoBien = pedirNumero(&numero);

	if(salioTodoBien == 0)
	{
		printf("El numero es: %d", numero);
	}
	else
	{
		printf("Error");
	}

	return EXIT_SUCCESS;
}


