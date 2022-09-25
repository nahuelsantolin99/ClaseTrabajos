/*
 ============================================================================
 Name        : Clase3Sab.c
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

//Dejo los prototipos y los desarrollos aca para verlo mas a mano.

/*
int cargarArray(int array[], int cantidadElementos);
int contarPositivosYNegativos(int array[], int cantidadElementos, int contadorPositivos, int contadorNegativos, int* pContadorPositivos, int* pContadorNegativos);
int sumarPares(int array[], int cantidadElementos, int acumuladorPares, int* pAcumuladorPares);
int determinarMayorImpares(int array[], int cantidadElementos, int flagImpares, int* mayorImpares);
int imprimirLista(int array[], int cantidadElementos);
int imprimirPares(int array[], int cantidadElementos);
int imprimirImpares(int array[], int cantidadElementos);
*/

int main(void)
{
	setbuf(stdout,NULL);

	int numeros[TAM];
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	int acumuladorPares = 0;
	int mayorImpares;
	int flagImpares = 1;

	cargarArray(numeros, TAM);

	if(contarPositivosYNegativos(numeros, TAM, contadorPositivos, contadorNegativos, &contadorPositivos, &contadorNegativos) == 0)
	{
		printf("Hay %d positivos y %d negativos\n", contadorPositivos, contadorNegativos);
	}

	if(sumarPares(numeros, TAM, acumuladorPares, &acumuladorPares) == 0)
	{
		printf("La suma de pares es %d\n", acumuladorPares);
	}

	if(determinarMayorImpares(numeros, TAM, flagImpares, &mayorImpares)== 0)
	{
		printf("El mayor de los impares es %d\n", mayorImpares);
	}

	imprimirLista(numeros, TAM);

	imprimirPares(numeros, TAM);

	imprimirImpares(numeros, TAM);

	return EXIT_SUCCESS;
}

/*
int cargarArray(int array[], int cantidadElementos)
{
	int retorno = -1;
	int numero;
	int i;

	if(array != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			if(utn_getNumero(&numero, "Ingrese numero entero", "Error. Numero no valido", -1000, 1000, 2)== 0)
			{
				array[i] = numero;
			}
			else
			{
				printf("ERROR");
			}
		}

		retorno = 0;
	}

	return retorno;
}

int contarPositivosYNegativos(int array[], int cantidadElementos, int contadorPositivos, int contadorNegativos, int* pContadorPositivos, int* pContadorNegativos)
{
	int retorno = -1;
	int i;

	if(array != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			if(array[i] > 0)
			{
				contadorPositivos++;
			}
			else
			{
				contadorNegativos++;
			}
		}

		*pContadorPositivos = contadorPositivos;
		*pContadorNegativos = contadorNegativos;

		retorno = 0;
	}

	return retorno;
}

int sumarPares(int array[], int cantidadElementos, int acumuladorPares, int* pAcumuladorPares)
{
	int retorno = -1;
	int i;

	if(array != NULL && pAcumuladorPares != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			if(array[i] % 2 == 0)
			{
				acumuladorPares = acumuladorPares+ array[i];
			}
		}

		*pAcumuladorPares = acumuladorPares;

		retorno = 0;
	}

	return retorno;
}

int determinarMayorImpares(int array[], int cantidadElementos, int flagImpares, int* mayorImpares)
{
	int retorno = -1;
	int i;
	int bufferMayorImpares;

	if(array != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			if(flagImpares == 1 && array[i] % 2 != 0)
			{
				bufferMayorImpares = array[i];
				flagImpares = 0;
			}
			else
			{
				if(array[i] % 2 && bufferMayorImpares < array[i])
				{
					bufferMayorImpares = array[i];
				}
			}
		}

		*mayorImpares = bufferMayorImpares;
		retorno = 0;
	}

	return retorno;
}

int imprimirLista(int array[], int cantidadElementos)
{
	int retorno = -1;
	int i;

	if(array != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			printf("Ingreso %d en la posicion %d\n", array[i], i);
		}

		retorno = 0;
	}

	return retorno;
}

int imprimirPares(int array[], int cantidadElementos)
{
	int retorno = -1;
	int i;

	if(array != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			if(array[i] % 2 == 0)
			{
				printf("Son pares. Ingreso %d en la posicion %d\n", array[i], i);
			}
		}

		retorno = 0;
	}

	return retorno;
}

int imprimirImpares(int array[], int cantidadElementos)
{
	int retorno = -1;
	int i;

	if(array != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			if(array[i] % 2 != 0)
			{
				printf("Son impares. Ingreso %d en la posicion %d\n", array[i], i);
			}
		}

		retorno = 0;
	}

	return retorno;
}
*/
