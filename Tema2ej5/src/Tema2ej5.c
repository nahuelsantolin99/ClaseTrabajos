/*
 ============================================================================
 Name        : 25nuevo.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PRECIO 450

int main(void)
{
	setbuf(stdout,NULL);

	int legajo;
	char estadoCivil;
	int edad;
	int anoIngreso;
	char genero;
	char respuesta;
	int contadorVueltas = 0;
	int contadorMayores = 0;
	int flagMasTiempo = 1;
	int anoMasViejo;
	int legajoMasViejo;
	int edadMasVieja;
	int abono;
	int descuento;
	int descuentoCalculado;
	float valorConDescuento;
	int abonoMayores;
	int descuentoMayor;
	int descuentoMayorCalculado;
	float valorDescuentoMayores;

	do
	{
		do
		{
			printf("Ingrese legajo de 4 cifras: ");
			scanf("%d", &legajo);
			fflush(stdin);
		}while(legajo < 1000 || legajo > 9999);

		do
		{
			printf("Ingrese 's' para soltero, 'c' para casado, 'v' para viudo: ");
			scanf("%c", &estadoCivil);
			fflush(stdin);
		}while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v');

		do
		{
			printf("Ingrese edad mayor a 17: ");
			scanf("%d", &edad);
			fflush(stdin);
		}while(edad < 18);

		do
		{
			printf("Ingrese año de ingreso entre 1999 a 2022: ");
			scanf("%d", &anoIngreso);
			fflush(stdin);
		}while(anoIngreso < 1999 || anoIngreso > 2022);

		do
		{
			printf("Ingrese 'f' para femenino, 'm' para masculino, 'o' para no binaro: ");
			scanf("%c", &genero);
			fflush(stdin);
		}while(genero != 'f' && genero != 'm' && genero != 'o');

		if(edad > 60)
		{
			contadorMayores++;
		}

		if(flagMasTiempo == 1 && genero == 'f')
		{
			anoMasViejo = anoIngreso;
			legajoMasViejo = legajo;
			edadMasVieja = edad;
			flagMasTiempo = 0;
		}
		else
		{
			if(genero == 'f' && anoIngreso < anoMasViejo)
			{
				anoMasViejo = anoIngreso;
				legajoMasViejo = legajo;
				edadMasVieja = edad;
			}
		}

		contadorVueltas++;

		do
		{
			printf("Ingrese 'y' si quiere ingresar mas datos/ 'n' para salir: ");
			scanf("%c", &respuesta);
			fflush(stdin);
		}while(respuesta != 'y' && respuesta != 'n');
	}while(respuesta == 'y' || contadorVueltas == 1);

	abono = PRECIO * contadorVueltas;

	printf("La cantidad de personas mayores de 60 es: %d\n", contadorMayores);
	printf("El legajo de la mujer que ingreso hace mas tiempo es %d y su edad %d\n", legajoMasViejo, edadMasVieja);
	printf("Debera abonar por las libretas sin descuento %d pesos\n", abono);

	if(contadorVueltas > 5)
	{
		descuento = 5;
		descuentoCalculado = ((float)abono * 5) / 100;
		valorConDescuento = abono - descuentoCalculado;

		printf("Con 5 por ciento de descuento el valor neto es: %.2f\n", valorConDescuento);
	}
	else
	{
		if(contadorVueltas > 10)
		{
			descuento = 10;
			descuentoCalculado = ((float)abono * 5) / 100;
			valorConDescuento = abono - descuentoCalculado;

			printf("Con 10 por ciento de descuento el valor neto es: %.2f\n", valorConDescuento);
		}
	}

	if(contadorMayores > 0)
	{
		abonoMayores = PRECIO * contadorMayores;
		descuentoMayor = 25;
		descuentoMayorCalculado = ((float)PRECIO * descuentoMayor) / 100;
		valorDescuentoMayores = abonoMayores - descuentoMayorCalculado;

		printf("Con 25 por ciento aplicado a mayores el neto es: %.2f", valorDescuentoMayores);
	}

	return EXIT_SUCCESS;
}
