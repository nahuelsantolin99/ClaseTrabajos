/*
 ============================================================================
 Name        : T2ej2.c
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
	int acumuladorPositivos = 0;
	int acumuladorNegativos = 0;
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	int minimoPositivo;
	int maximoNegativo;
	int flagPositivo = 1;
	int flagNegativo = 1;
	char respuesta;
	float promedioPositivos;
	float promedioNegativos;

	do
	{
		printf("Ingrese numero entero: ");
		scanf("%d", &numero);

		if(numero > 0)
		{
			if(flagPositivo == 1)
			{
				minimoPositivo = numero;
				flagPositivo = 0;
			}
			else
			{
				if(numero < minimoPositivo)
				{
					minimoPositivo = numero;
				}
			}

			acumuladorPositivos = acumuladorPositivos + numero;
			contadorPositivos++;
		}
		else
		{
			if(numero < 0)
			{
				if(flagNegativo == 1)
				{
					maximoNegativo = numero;
					flagNegativo = 0;
				}
				else
				{
					if(numero > maximoNegativo)
					{
						maximoNegativo = numero;
					}
				}

				acumuladorNegativos = acumuladorNegativos + numero;
				contadorNegativos++;
			}
		}

		do
		{
			printf("s para ingresar otro numero/ n para salir: ");
			scanf(" %c", &respuesta);
		}while(respuesta != 's' && respuesta != 'n');

	}while(respuesta == 's');

	promedioPositivos = (float)acumuladorPositivos / contadorPositivos;
	promedioNegativos = (float)acumuladorNegativos / contadorNegativos;

	printf("El promedio de los positivos es %.2f y su minimo es %d\n", promedioPositivos,minimoPositivo);
	printf("El promedio de los negativos es %.2f y su maximo es %d", promedioNegativos,maximoNegativo);

	return EXIT_SUCCESS;
}
