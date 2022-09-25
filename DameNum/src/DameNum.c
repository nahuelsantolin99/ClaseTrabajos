/*
 ============================================================================
 Name        : DameNum.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero(int* pNumero);

int main(void)
{
	int numero;
	int salioTodoBien;

	salioTodoBien = pedirNumero(&numero);

	if(salioTodoBien == 0)
	{
		printf("El numero es: %d", numero);
	}
	else
	{
		printf("Error");
	}

	return EXIT_SUCCESS;
}

int pedirNumero(int* pNumero)
{
	int retorno = -1;
	int bufferInt;

	printf("Ingrese un numero: ");
	scanf("%d", &bufferInt);
	
	
	
	retorno = 0;
	
	

	return retorno;
}
