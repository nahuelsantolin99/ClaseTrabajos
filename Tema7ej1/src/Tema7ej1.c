/*
 ============================================================================
 Name        : Tema7ej1.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define TAM 15
#define LEN 30

int main(void)
{
	setbuf(stdout,NULL);

	char nombre[15];
	char apellido[15];
	char completo[30];

	printf("Ingrese nombre: ");
	myGets(nombre, sizeof(nombre));

	printf("Ingrese apellido: ");
	fflush(stdin);
	gets(apellido);

	formarApellidoNombre(nombre, apellido, completo);

	printf("El nombre completo es %s", completo);

	return EXIT_SUCCESS;
}








