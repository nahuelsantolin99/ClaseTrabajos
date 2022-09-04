/*
 ============================================================================
 Name        : T2ej3.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d", &numero);

	if(numero % 2 == 0)
	{
		printf("Es par");
	}
	else
	{
		printf("Es impar");
	}

	return EXIT_SUCCESS;
}
