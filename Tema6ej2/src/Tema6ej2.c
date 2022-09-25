/*
 ============================================================================
 Name        : Tema6ej2.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define TAM 10

int main(void)
{
	setbuf(stdout,NULL);

	int numeros[TAM];

	cargarArrayEnteros(numeros, TAM);

	if(ordenarArrayCrecientePositivos(numeros, TAM) == 0)
	{
		imprimirListaEnterosPositivos(numeros, TAM);
	}

	if(ordenarArrayDecrecienteNegativos(numeros, TAM) == 0)
	{
		imprimirListaEnterosNegativos(numeros, TAM);
	}

	return EXIT_SUCCESS;
}





