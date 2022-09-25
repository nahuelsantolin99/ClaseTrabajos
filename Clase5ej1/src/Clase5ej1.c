/*
 ============================================================================
 Name        : Clase5ej1.c
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

int main(void)
{
	setbuf(stdout,NULL);

	int i;
	int legajo;
	int edad[TAM];
	int sueldo[TAM];
	float promedioSueldos;

	for(i = 0; i < TAM; i++)
	{
		legajo = i;

		printf("Ingrese edad para el legajo %d: ", legajo);
		scanf("%d", &edad[i]);

		printf("Ingrese el sueldo para el legajo %d: ", legajo);
		scanf("%d", &sueldo[i]);
	}

	for(i = 0; i < TAM; i++)
	{
		printf("La edad es %d y el sueldo %d del legajo %d\n", edad[i], sueldo[i], i);
	}

	if(promediarPositivosArray(sueldo, TAM, &promedioSueldos) == 0)
	{
		printf("El promedio de los sueldos es: %.2f\n", promedioSueldos);
	}
	else
	{
		printf("Error\n");
	}

	return EXIT_SUCCESS;
}
