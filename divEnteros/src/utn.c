/*
 * utn.c
 *
 *  Created on: 6 sep. 2022
 *      Author: Nahuel
 */

#include <stdio.h>
#include <stdlib.h>

#define DESC 10

void mostrarEntero(int numeroEntero)
{
	printf("Ingreso %d", numeroEntero);
}

float retornarFlotante(void)
{
	float flotante;

	printf("Ingrese un flotante: ");
	scanf("%f", &flotante);

	return flotante;
}

int determinarParidad(int num)
{
	int retorno;

	if(num % 2 == 0)
	{
		retorno = 1;
	}
	else
	{
		retorno = 0;
	}

	return retorno;
}

void mostrarEnteroLimite(int numeroEntero)
{
	if(numeroEntero > 0 && numeroEntero < 50)
	{
		printf("Ingreso el numero entero %d\n", numeroEntero);
	}
	else
	{
		printf("Ingreso un numero fuera de rango\n");
	}
}

float retornarFlotanteLimite(void)
{
	float flotante;

	do
	{
		printf("Ingrese un flotante: ");
		scanf("%f", &flotante);
	}while(flotante < 0 || flotante > 50);

	return flotante;
}

float realizarDiezPorCientoDescuento(int num)
{
	float descuentoCalculado;
	float valorConDescuento;

	descuentoCalculado = ((float)num * DESC) / 100;
	valorConDescuento = num - descuentoCalculado;

	return valorConDescuento;
}

int realizarOperacion(int num1, int num2, char operador)
{
	int retorno;

	if(operador == 's')
	{
		retorno = num1 + num2;
	}
	else
	{
		retorno = num1 - num2;
	}

	return retorno;
}

int sumarConPuntero(int numero1, int numero2, int* resultado)
{
	int retorno = -1;

	*resultado = numero1 + numero2;

	retorno = 0;

	return retorno;
}

int pedirNumero(int* pNumero)
{
	int retorno = -1;
	int bufferInt;

	printf("Ingrese un numero: ");
	scanf("%d", &bufferInt);
	if(pNumero != NULL)
	{
		*pNumero = bufferInt;
		retorno = 0;
	}

	return retorno;
}

int dividirEnteros(int operador1, int operador2, float* pResultado)
{
	int retorno = -1;
	float bufferResultado;

	if(pResultado != NULL && operador2 != 0)
	{
		bufferResultado = (float)operador1 / operador2;
		*pResultado = bufferResultado;
		retorno = 0;
	}

	return retorno;
}




