/*
 ============================================================================
 Name        : Tema7ej3.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);

	char prueba[10];

	printf("Ingrese cadena: ");
	myGets(prueba, sizeof(prueba));

	if(esSoloLetra(prueba) == 1)
	{
		printf("Es solo letras");
	}
	else
	{
		printf("Error");
	}


	return EXIT_SUCCESS;
}

