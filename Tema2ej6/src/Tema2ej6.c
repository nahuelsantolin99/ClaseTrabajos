/*
 ============================================================================
 Name        : Tema2ej6.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

    char caracter;
    int i;
    int contadorMinuscula = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Ingrese caracter. Contaremos 'm' minusculas: ");
        scanf("%c", &caracter);
        fflush(stdin);

        if(caracter == 'm')
        {
            contadorMinuscula++;
        }

    }

    if(contadorMinuscula > 0)
    {
    	printf("Ingreso %d letras 'm' minuscula", contadorMinuscula);
    }
    else
    {
    	printf("No se han ingresado 'm' minusculas");
    }

    return 0;
}
