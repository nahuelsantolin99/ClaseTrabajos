/*
 * restas.c
 *
 *  Created on: 1 sep. 2022
 *      Author: Nahuel
 */

#include <stdio.h>
#include <stdlib.h>

int restar1(int num1, int num2)
{
	int resta;

	resta = num1 - num2;

	return resta;
}

int restar2(void)
{
	int numA;
	int numB;
	int resta;

	printf("Ingrese num A: ");
	scanf("%d", &numA);

	printf("Ingrese num B: ");
	scanf("%d", &numB);

	resta = numA - numB;

	return resta;
}

void restar3(int numeroA, int numeroB)
{
	int resta;

	resta = numeroA - numeroB;

	printf("El resultado de la resta3 es: %d\n", resta);
}

void restar4(void)
{
	int numero1;
	int numero2;
	int resta;

	printf("Ingrese numero: ");
	scanf("%d", &numero1);

	printf("Ingrese un ultimo numero: ");
	scanf("%d", &numero2);

	resta = numero1 - numero2;

	printf("El resultado de la resta4 es: %d", resta);
}
