/*
 ============================================================================
 Name        : T2ej4.c
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
	int i;
	int posicion;
	int productoNegativos = 1;
	int menorIngresado;
	int mayorPar;
	int mayorIngresado;
	int flagMenor = 1;
	int flagMayorPar = 1;
	int flagMayor = 1;


	for(i = 0; i < 8; i++)
	{
		do
		{
			printf("Ingrese numero entero distinto de 0: ");
			scanf("%d", &numero);
		}while(numero == 0);

		if(flagMenor == 1)
		{
			menorIngresado = numero;
			flagMenor = 0;
		}
		else
		{
			if(numero < menorIngresado)
			{
				menorIngresado = numero;
			}
		}

		if(numero % 2 == 0)
		{
			if(flagMayorPar == 1)
			{
				mayorPar = numero;
				flagMayorPar = 0;
			}
			else
			{
				if(numero > mayorPar)
				{
					mayorPar = numero;
				}
			}
		}

		if(numero < 0)
		{
			productoNegativos = productoNegativos * numero;
		}
		else
		{
			productoNegativos = 0;
		}

		if(flagMayor == 1)
		{
			mayorIngresado = numero;
			flagMayor = 0;
			posicion = i + 1;
		}
		else
		{
			if(numero > mayorIngresado)
			{
				mayorIngresado = numero;
				posicion++;
			}
		}
	}

	printf("El menor numero ingresado es: %d\n", menorIngresado);
	printf("El mayor numero par ingresado es: %d\n", mayorPar);
	printf("El producto de los negativos es: %d\n", productoNegativos);
	printf("El mayor numero fue ingresado en la posicion: %d", posicion);

	return EXIT_SUCCESS;
}
