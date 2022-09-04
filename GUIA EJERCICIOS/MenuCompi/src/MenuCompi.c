/*
 ============================================================================
 Name        : MenuCompi.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Menu(void);

int main(void) {
	setbuf(stdout,NULL);
	char respuesta;
	int bandera1=1;
	int bandera2=1;

	do
	{

		switch(Menu())
		{
			case 1:
				printf("iniciando\n");
				bandera1=0;
				break;

			case 2:
				if(bandera1==1)
				{
					printf("Debe Iniciar antes de Procesar\n");
				}
				else
				{
					printf("proceso exitoso\n");
					bandera2=0;
				}
			break;


			case 3:
				if(bandera1==1)
				{
					printf("Debe Iniciar antes de Finalizar\n" );
				}
				else if(bandera2==1)
				{
					printf("Debe Procesar antes de Finalizar\n");
				}
				else
				{
					printf("finalizacion exitosa\n");
					bandera1=1;
					bandera2=1;
				}



				break;

			case 4:
				printf("esta seguro que desea salir?s/n \n");
				fflush(stdin);
				scanf("%c",&respuesta);


			break;
		}



	}while(respuesta!='s');

		return EXIT_SUCCESS;
}

int Menu(void)
{
	int opcion;
	printf("-1 iniciar \n");
	printf("-2 Procesar \n");
	printf("-3 Finalizar \n");
	printf("-4 Salir \n");
	scanf("%d",&opcion);
	return opcion;
}
