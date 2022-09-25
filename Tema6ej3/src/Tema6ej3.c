/*
 ============================================================================
 Name        : Tema6ej3.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define TAM 15

int main(void)
{
	setbuf(stdout,NULL);

	int legajo;
	int	edades[TAM];
	int salarios[TAM];
	char generos[TAM];
	int i;
	int retornoPromedio;

	for(i = 0; i < TAM; i++)
	{
		legajo = i;

		printf("Ingrese edad para la posicion %d: ", i);
		scanf("%d", &edades[i]);

		printf("Ingrese salario para la posicion %d: ", i);
		scanf("%d", &salarios[i]);

		printf("Ingrese genero ('f' - femenino/ 'm' - masculino/ 'o' - no binario) para la posicion %d: ", i);
		fflush(stdin);
		scanf("%c", &generos[i]);
	}

	retornoPromedio = calcularYRetornarPromedio(salarios, TAM);
	printf("El promedio de los salarios es %d\n", retornoPromedio);

	for(i = 0; i < TAM; i++)
	{
		if(generos[i] == 'o')
		{
			printf("Para el no binario en la posicion %d, la edad es %d y el salario %d\n", i, edades[i], salarios[i]);
		}
	}


	return EXIT_SUCCESS;
}

