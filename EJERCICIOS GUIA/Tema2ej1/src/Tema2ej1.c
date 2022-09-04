/*
 ============================================================================
 Name        : T2ej1.c
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
	int acumulador = 0;
	int contador = 0;
	float promedio;

	do
	{
		do
		{
			printf("Ingrese numero negativo menor a 0: ");
			scanf("%d", &numero);
		}while(numero > -1);

		acumulador = acumulador + numero;
		contador++;
	}while(contador < 7);

	promedio = (float)acumulador / contador;

	printf("El promedio de los numeros es: %f", promedio);

	return EXIT_SUCCESS;
}
