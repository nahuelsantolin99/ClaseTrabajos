/*
 ============================================================================
 Name        : Tema3ej4.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrarEntero(int numeroEntero);
float retornarFlotante(void);

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	float flotanteRetornado;

	printf("Ingrese un numero entre 0 y 50: ");
	scanf("%d", &numero);

	mostrarEntero(numero);

	flotanteRetornado = retornarFlotante();

	printf("El numero flotante ingresado es: %.2f", flotanteRetornado);

	return EXIT_SUCCESS;
}

void mostrarEntero(int numeroEntero)
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

float retornarFlotante(void)
{
	float flotante;

	do
	{
		printf("Ingrese un flotante: ");
		scanf("%f", &flotante);
	}while(flotante < 0 || flotante > 50);

	return flotante;
}
