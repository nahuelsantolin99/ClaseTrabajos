/*
 ============================================================================
 Name        : Tema5ej4.c
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
#define MAX 100
#define MIN -100

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int enteros[TAM];
	int i;
	int contadorNegativos = 0;
	int acumuladorImpares = 0;
	int flagPares = 1;
	int mayorPares;

	for(i = 0; i < TAM; i++)
	{
		if(utn_getNumero(&numero, "Ingrese entero entre -100 y 100 inclusive", "Numero no valido", MIN, MAX, 2) == 0)
		{
			enteros[i] = numero;
		}
		else
		{
			printf("Hubo un error");
		}
	}

	if(contarNegativos(enteros, TAM, contadorNegativos, &contadorNegativos) == 0)
	{
		printf("La cantidad de negativos es %d\n", contadorNegativos);
	}

	if(sumarImpares(enteros, TAM, acumuladorImpares, &acumuladorImpares) == 0)
	{
		printf("La sumatoria de impares es %d\n", acumuladorImpares);
	}

	if(determinarMayorPares(enteros, TAM, flagPares, &mayorPares) == 0)
	{
		printf("El mayor de los pares es %d\n", mayorPares);
	}

	imprimirListaEnteros(enteros, TAM);

	listarMayoresAQuince(enteros, TAM);

	imprimirPosicionesImpares(enteros, TAM);

	return EXIT_SUCCESS;
}





