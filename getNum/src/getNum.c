/*
 ============================================================================
 Name        : getNum.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Get numero con prototipo, desarrollo y llamada en el main.

#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int huboError;

	huboError = utn_getNumero(&numero, "Pasame un numero", "Numero no valido", 0, 1000, 2);

	if(huboError == 0)
	{

		printf("El numero es: %d", numero);
	}
	else
	{
		printf("Error. Ha superado los reintentos");
	}

	return EXIT_SUCCESS;
}

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado!= NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)

		do
		{
			printf("%s: ", mensaje);
			scanf("%d", &bufferInt);

			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s\n", mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);

	return retorno;
}
