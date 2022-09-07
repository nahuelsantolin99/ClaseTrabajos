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

int inicializarArrays(int array[], int cantidadElementos);
int mostrarArrays(int muestraArray[], int cantidadElementos);

int main(void)
{
	setbuf(stdout,NULL);

	int i;
	int numero;
	int listaEdad[5];
	float listaSalario[5];
	int legajo;
	int edad;
	float salario;
	char respuesta = 's';
	int retorno;
	int retorno1;

	//inicializo los arrays
	retorno = inicializarArrays(listaEdad, 5);
	retorno1 = inicializarArrays(listaSalario, 5);

	if(retorno == 0 && retorno1 == 0)
	{
		/*do
			{
				//carga aleatoria
				printf("Que legajo queres completar?: ");
				scanf("%d", &legajo);

				printf("Ingrese la edad: ");
				scanf("%d", &edad);

				listaEdad[legajo] = edad;

				printf("Ingrese el salario: ");
				scanf("%d", &salario);

				listaSalario[legajo] = salario;

				printf("Desea continuar ingresando legajos? s/n");
				scanf("%c", &respuesta);
			}while(respuesta == 's');
		*/

		printf("La funcion anduvo");

	}











































	//muestro los datos de mi array cargado
















	/*
	//carga secuencial
	for(i = 0; i < 5; i++)
	{
		printf("\nIngrese una nota para la posicion %d", i);
		scanf("%d", &numero);
		listaNotas[i] = numero;
	}

	//muestro los datos de mi array cargado
	for(i = 0; i <5; i++)
	{
		printf("\nLa nota para la posicion %d es: %d", i, listaNotas[i]);
	}
	*/










	/*
	 char nombre[20];

	printf("Ingrese su nombre: ");
	fflush(stdin);
	scanf("%s", nombre); //sin ampersand

	printf("Ud ingreso el nombre: %s", nombre);
	*/
	return EXIT_SUCCESS;
}

int inicializarArrays(int array[], int cantidadElementos)
{
	int i;
	int retorno = -1;

	if(array != NULL && cantidadElementos > 0)
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			array[i] = 0;
		}

		retorno = 0;
	}

	return retorno;
}

/*

int mostrarArrays(int muestraEdad[], int int cantidadElementos)
{
	int i;
	int retorno = -1;

	if(muestraEdad != NULL && )
	{
		for(i = 0; i < cantidadElementos; i++)
		{
			printf("Los edad del legajo %d es %d y su salario %d", muestraEdad[i], i, salario[i]);
		}
	}

	return retorno;
}
*/

