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

int main(void)
{
	setbuf(stdout,NULL);

	int i;
	int legajo;
	int edad[10];
	int sueldo[10];
	int contadorPersonas = 0;
	int acumuladorSueldos = 0;
	float promedioSueldos;

	for(i = 0; i < 10; i++)
	{
		legajo = i;

		printf("Ingrese la edad para el legajo %d: ", legajo);
		scanf("%d", &edad[i]);

		printf("Ingrese el sueldo para el legajo %d: ", legajo);
		scanf("%d", &sueldo[i]);

		contadorPersonas++;

		acumuladorSueldos = acumuladorSueldos + sueldo[i];
	}

	for(i = 0; i < 10; i++)
	{
		printf("La edad es %d y el sueldo %d del legajo %d\n", edad[i], sueldo[i], legajo);
	}

	promedioSueldos = (float)acumuladorSueldos / contadorPersonas;

	printf("El promedio de los sueldos es: %.2f", promedioSueldos);

	return EXIT_SUCCESS;
}
