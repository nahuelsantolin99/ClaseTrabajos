/*
 * funMatrizABM.c
 *
 *  Created on: 25 sep. 2022
 *      Author: Nahuel
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funMatrizABM.h"
#include "utn.h"

int ordenarPorCodigo(char codigo[][5], char modelo[][11], int cantidad[], float precio[], int cantidadProductos)
{
	int retorno = -1;
	int i;
	int j;
	char auxCodigo[5];
	char auxModelo[11];
	int auxCantidad;
	float auxPrecio;

	if(codigo != NULL && modelo != NULL && cantidad != NULL && precio != NULL && cantidadProductos > 0)
	{
		for(i = 0; i < cantidadProductos - 1; i++)
		{
			for(j = i+1; j < cantidadProductos; j++)
			{
				if(strcmp(codigo[i], codigo[j]) > 0)
				{
					strcpy(auxCodigo, codigo[i]);
					strcpy(codigo[i], codigo[j]);
					strcpy(codigo[j], auxCodigo);

					strcpy(auxModelo, modelo[i]);
					strcpy(modelo[i], modelo[j]);
					strcpy(modelo[j], auxModelo);

					auxCantidad = cantidad[i];
					cantidad[i] = cantidad[j];
					cantidad[j] = auxCantidad;

					auxPrecio = precio[i];
					precio[i] = precio[j];
					precio[j] = auxPrecio;
				}
			}
		}

		retorno = 0;
	}

	return retorno;
}

int modificarModelo(char modelo[][11])
{
	int retorno = -1;
	int auxIndex;
	char respuesta;
	char bufferModelo[11];

	if(modelo != NULL)
	{
		do
		{
			preguntarIndex("Ingrese el index del producto a modificar modelo: ", &auxIndex);

			do
			{
				getsValidado("Ingrese el nuevo modelo del producto(solo letras): ", "Error", bufferModelo, sizeof(bufferModelo));
			}while(esSoloLetra(bufferModelo) == 0);

			strcpy(modelo[auxIndex-1], bufferModelo);

			do
			{
				printf("Desea modificar otro modelo? s/n");
				scanf("%c", &respuesta);
			}while(respuesta != 's' && respuesta != 'n');

		}while(respuesta == 's');
	}

	return retorno;
}

int modificarPrecio(float precio[])
{
	int retorno = -1;
	int auxIndex;
	float bufferPrecio;
	char respuesta;

	if(precio != NULL)
	{
		do
		{
			preguntarIndex("Ingrese el index del producto que desea modificarle precio", &auxIndex);

			printf("Ingrese el nuevo precio del producto: ");
			scanf("%f", &bufferPrecio);

			precio[auxIndex-1] = bufferPrecio;

			do
			{
				printf("Desea modificar otro producto? s/n: ");
				fflush(stdin);
				scanf("%c", &respuesta);
			}while(respuesta != 's' && respuesta != 'n');
		}while(respuesta == 's');

		retorno = 0;
	}

	return retorno;
}

int cargarProductos(char codigo[][5], char modelo[][11], int cantidadProductos[], float precio[], int cantidadCarga)
{
	int retorno = -1;
	int i;
	char bufferCodigo[5];
	char bufferModelo[11];
	int bufferProductos;
	float bufferPrecios;

	if(codigo != NULL && cantidadCarga > 0)
	{
		for(i = 0; i < cantidadCarga; i++)
		{
			do
			{
				//EL GETS ME VALIDA QUE NO SUPERE EL LIMITE DE ELEMENTOS
				getsValidado("Ingrese alfanumerico(4 caracteres): ", "Error. Reingrese alfanumerico", bufferCodigo, sizeof(bufferCodigo));
			}while(esAlfanumerico(bufferCodigo) == 0);//VA A ITERAR SIEMPRE QUE NO SEA ALFANUMERICO

			if(esAlfanumerico(bufferCodigo) == 1)
			{
				strcpy(codigo[i], bufferCodigo);
			}

			do
			{
				//EL GETS ME VALIDA QUE NO SUPERE EL LIMITE DE ELEMENTOS
				getsValidado("Ingrese modelo(solo letras): ", "Error. Reingrese modelo", bufferModelo, sizeof(bufferModelo));
			}while(esSoloLetra(bufferModelo) == 0);//VA A ITERAR SIEMPRE QUE NO SEA SOLO LETRAS

			if(esSoloLetra(bufferModelo) == 1)
			{
				strcpy(modelo[i], bufferModelo);
			}

			utn_getNumero(&bufferProductos, "Ingrese cantidad de productos: ", "Error", 0, 1000, 2);

			cantidadProductos[i] = bufferProductos;

			utn_getNumeroFlotante(&bufferPrecios, "Ingrese precio del producto", "Error", 0, 1000, 2);

			precio[i] = bufferProductos;
		}
	}

	return retorno;
}

int venderProductos(int cantidadProductos[])
{
	int retorno = -1;
	int auxIndex;
	char respuesta;

	if(cantidadProductos != NULL)
	{
		do
		{
			preguntarIndex("Ingrese el index del producto que desea vender: ", &auxIndex);

			cantidadProductos[auxIndex-1]--;

			do
			{
				printf("Desea vender otro producto? s/n");
				fflush(stdin);
				scanf("%c", &respuesta);
			}while(respuesta != 's' && respuesta != 'n');
		}while(respuesta == 's');

		retorno = 0;
	}

	return retorno;
}

int preguntarIndex(const char* mensaje, int* pAuxIndex)
{
	int retorno = -1;
	int index;

	if(pAuxIndex != NULL)
	{
		printf("%s", mensaje);
		scanf("%d", &index);

		*pAuxIndex = index;
		retorno = 0;
	}

	return retorno;
}

int imprimirProductos(char codigo[][5], char modelo[][11], int cantidadProductos[], float precio[], int cantidadCarga)
{
	int retorno = -1;
	int i;

	if(codigo != NULL && modelo != NULL && cantidadProductos != NULL && precio != NULL && cantidadCarga > 0)
	{
		printf("\nINDEX    CODIGO    MODELO    CANTIDAD    PRECIO\n");

		for(i = 0; i < cantidadCarga; i++)
		{
			printf("%d       %s        %s        %d         %.2f  \n", i + 1, codigo[i], modelo[i], cantidadProductos[i], precio[i]);
		}

		retorno = 0;
	}

	return retorno;
}
