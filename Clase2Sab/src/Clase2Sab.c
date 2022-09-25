/*
 ============================================================================
 Name        : Clase2Sab.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioSab.h"

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int i;
	int retornoAnalisis;
	int acumuladorPositivos = 0;
	int contadorPositivos = 0;
	int contadorCeros = 0;
	float promedioPositivos;
	int flagMenorNegativo = 1;
	int menorNegativo;
	int acumuladorNegativos = 0;


	for(i = 0; i < 10; i++)
	{
		numero = solicitarNumero();

		retornoAnalisis = retornarAnalisis(numero);

		switch(retornoAnalisis)
		{
			case 1:
				acumuladorPositivos = acumuladorPositivos + numero;
				contadorPositivos++;
			break;
			case -1:
				menorNegativo = buscarMenorNegativo(flagMenorNegativo, numero);
			break;
			default:
				contadorCeros++;
			break;
		}
	}

	for(i = menorNegativo + 1; i < 0; i++)
	{
		acumuladorNegativos = acumuladorNegativos + i;
	}

	promedioPositivos = promediarAcumulado(acumuladorPositivos, contadorPositivos);

	printf("El promedio de los positivos es: %.2f\n", promedioPositivos);
	printf("La cantidad de ceros es: %d\n", contadorCeros);
	printf("La suma de los antecesores del menor negativo es: %d", acumuladorNegativos);

	return EXIT_SUCCESS;
}

