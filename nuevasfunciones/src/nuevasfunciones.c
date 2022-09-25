/*
 ============================================================================
 Name        : nuevasfunciones.c
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

int esFloat(char* cadena);

int main(void)
{
	setbuf(stdout,NULL);

	char cadenaFlotante[10];

	printf("Dame cadena flotante: ");
	myGets(cadenaFlotante, sizeof(cadenaFlotante));

	if(esFloat(cadenaFlotante) == 1)
	{
		printf("Es cadena flotante");
	}
	else
	{
		printf("Error");
	}

	return EXIT_SUCCESS;
}

int esFloat(char* cadena)
{
	int retorno = 1;
	int i;
	int contadorPuntos = 0;

	if(cadena != NULL)
	{
		for(i = 0; i < strlen(cadena); i++)
		{
			if(i == 0 && (cadena[i] != '+' || cadena[i] != '-'))
			{
				continue;
			}
			if(cadena[i] == '.')
			{
				contadorPuntos++;
			}
			if((cadena[i] < '0' || cadena[i] > '9') && cadena[i] != '.')
			{
				retorno = 0;
				break;
			}
		}

		if(contadorPuntos > 1)
		{
			retorno = 0;
		}
	}

	return retorno;
}
