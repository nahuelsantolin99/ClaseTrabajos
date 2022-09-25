/*
 ============================================================================
 Name        : Tema4ej3.c
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

	int celsius;
	int fahrenheit;
	char respuesta;

	do
	{
		utn_getNumero(&celsius, "Ingrese temperatura en Celsius", "No es valido", 0, 100, 2);
		utn_getNumero(&fahrenheit, "Ingrese temperatura en Fahrenheit", "Temperatura no valida", 32, 212, 2);

		seguirCarga(&respuesta);

	}while(respuesta == 's');

	return EXIT_SUCCESS;
}


