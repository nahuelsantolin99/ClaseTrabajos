/*
 ============================================================================
 Name        : Clase5.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define TAM 5

int main(void)
{
	setbuf(stdout,NULL);

	int listaEdad[TAM];
	int listaSalario[TAM];
	int legajo;
	int edad;
	int salario;
	char respuesta = 's';
	int retorno;
	int retorno1;

	//inicializo los arrays
	retorno = inicializarArray(listaEdad, TAM);
	retorno1 = inicializarArray(listaSalario, TAM);

	if(retorno == 0 && retorno1 == 0)
	{
		do
		{
			//carga aleatoria
			printf("Que legajo queres completar? 1 a 5: ");
			scanf("%d", &legajo);

			printf("Ingrese la edad: ");
			scanf("%d", &edad);

			listaEdad[legajo - 1] = edad;

			printf("Ingrese el salario: ");
			scanf("%d", &salario);

			listaSalario[legajo - 1] = salario;

			printf("Desea continuar ingresando legajos? s/n");
			fflush(stdin);
			scanf("%c", &respuesta);
		}while(respuesta == 's');
	}

	//muestro los arrays
	imprimirListaEnteros(listaEdad, TAM);

	imprimirListaEnteros(listaSalario, TAM);

	return EXIT_SUCCESS;
}


