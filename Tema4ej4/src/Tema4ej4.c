/*
 ============================================================================
 Name        : Tema4ej4.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);

	int opcion;
	int subOpcion;
	int flagLoguearse = 1;
	int flagCompra = 1;
	int flagPrimerVenta = 1;

	printf("Bienvenido!\n");

	do
	{
		utn_getNumero(&opcion, "1-Loguearse\n2-Comprar\n3-Ver mis compras\n4-Vender\n5-Salir", "No es opcion valida", 1, 5, 2);

		switch(opcion)
		{
			case 1:
				loguear(&flagLoguearse);
			break;
			case 2:
				comprar(flagLoguearse, &flagCompra);
			break;
			case 3:
				mostrarCompras(flagLoguearse, flagCompra);
			break;
			case 4:
				vender(subOpcion, flagLoguearse, flagPrimerVenta, &flagPrimerVenta, flagCompra);
			break;
		}
	}while(opcion != 5);

	return EXIT_SUCCESS;
}

