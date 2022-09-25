/*
 * utn.c
 *
 *  Created on: 6 sep. 2022
 *      Author: Nahuel
 */

#include <stdio.h>
#include <stdlib.h>

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

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado!= NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s\n", mensaje);
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
	}
	return retorno;
}

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferInt;

	if(pResultado!= NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s: ", mensaje);
			scanf("%f", &bufferInt);

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
	}
	return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char bufferInt;

	if(pResultado!= NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s: ", mensaje);
			scanf("%c", &bufferInt);

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
	}
	return retorno;
}

int seguirCarga(char* pRespuesta)
{
	int retorno = -1;
	char caracter;

	do
	{
		printf("Desea seguir ingresando datos? s/n: ");
		fflush(stdin);
		scanf("%c", &caracter);
	}while(caracter != 's' && caracter != 'n');

	*pRespuesta = caracter;
	retorno = 0;

	return retorno;
}

int loguear(int* pFlagLoguearse)
{
	int retorno = -1;

	printf("Login exitoso\n");
	*pFlagLoguearse = 0;

	retorno = 0;

	return retorno;
}

int comprar(int flagLoguearse, int* pFlagCompra)
{
	int retorno = -1;

	if(flagLoguearse == 1)
	{
		printf("Debe loguearse para comprar\n");
	}
	else
	{
		printf("Compra exitosa\n");
		*pFlagCompra = 0;
		retorno = 0;
	}

	return retorno;
}

int mostrarCompras(int flagLoguearse, int flagCompra)
{
	int retorno = -1;

	if(flagLoguearse == 1)
	{
		printf("Debe loguearse para ver sus compras\n");
	}
	else
	{
		if(flagCompra == 1)
		{
			printf("Debe comprar para ver sus compras\n");
		}
		else
		{
			printf("Efectivamente ha comprado!\n");
		}
	}

	retorno = 0;

	return retorno;
}

int vender(int subOpcion, int flagLoguearse, int flagPrimerVenta, int* pFlagPrimerVenta, int flagCompra)
{
	int retorno = -1;

	if(flagLoguearse == 1)
	{
		printf("Debe loguearse para ver vender\n");
	}
	else
	{
		if(flagPrimerVenta == 1)
		{
			utn_getNumero(&subOpcion, "1-Vender\n2-Hacer factura\n3-Volver atras", "Subopcion no valida", 1, 3, 2);

			switch(subOpcion)
			{
				case 1:
					if(flagCompra == 0)
					{
						printf("Venta exitosa\n");
						*pFlagPrimerVenta = 0;
					}
					else
					{
						printf("Debe haber una compra para poder vender\n");
					}

				break;
			}
		}
		else
		{
			printf("Solo puede vender una vez\n");
		}
	}

	retorno = 0;

	return retorno;
}

int cargarArrayEnteros(int array[], int cantidadElementos)
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

int imprimirListaEnteros(int array[], int cantidadElementos)
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
				printf("Ingreso %d en la posicion %d. Es par\n", array[i], i);
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
				printf("Ingreso %d en la posicion %d. Es impar\n", array[i], i);
			}
		}

		retorno = 0;
	}

	return retorno;
}

int sumarEnteros(int array[], int cantidadElementos, int acumuladorEnteros, int* pAcumuladorEnteros)
{
	int retorno = -1;
	int i;

	if(array != NULL && pAcumuladorEnteros != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			acumuladorEnteros = acumuladorEnteros + array[i];
		}

		*pAcumuladorEnteros = acumuladorEnteros;
		retorno = 0;
	}

	return retorno;
}



