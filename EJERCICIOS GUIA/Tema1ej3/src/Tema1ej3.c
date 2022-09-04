/*
 ============================================================================
 Name        : ESej3.c
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

	int numeroA;
	int numeroB;
	int numeroC;

	printf("Ingrese numero: ");
	scanf("%d", &numeroA);

	printf("Ingrese otro numero: ");
	scanf("%d", &numeroB);

	printf("Ingrese otro numero mas: ");
	scanf("%d", &numeroC);

	if((numeroA > numeroB && numeroA < numeroC) || (numeroA < numeroB && numeroA > numeroC))
	{
		printf("El numero del medio es: %d", numeroA);
	}
	else
	{
		if((numeroB > numeroA && numeroB < numeroC) || (numeroB < numeroA && numeroB > numeroC))
		{
			printf("El numero del medio es: %d", numeroB);
		}
		else
		{
			if((numeroC > numeroA && numeroC < numeroB) || (numeroC < numeroA && numeroC > numeroB))
			{
				printf("El numero del medio es: %d", numeroC);
			}
			else
			{
				printf("No hay numero del medio");
			}
		}
	}

	return EXIT_SUCCESS;
}
