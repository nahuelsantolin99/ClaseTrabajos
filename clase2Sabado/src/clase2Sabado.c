/*
 ============================================================================
 Name        : clase2Sabado.c
 Author      : Nahuel Santolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
   setbuf(stdout,NULL);

   int numero;
   char letra;
   int i;
   int acumuladorNumeros = 0;
   float promedioNumeros;
   int contadorA = 0;
   int contadorE = 0;
   int contadorI = 0;
   int contadorO = 0;
   int contadorU = 0;
   int flagMayorA = 1;
   int numeroMaximo;
   int producto = 1;

   for(i = 0; i < 10; i++)
   {
       printf("Ingrese numero: ");
       scanf("%d", &numero);

       printf("Ingrese letra: ");
       scanf(" %c", &letra);

       acumuladorNumeros = acumuladorNumeros + numero;

       producto = producto * numero;

       switch(letra)
       {
           case 'a':
                contadorA++;
                if(flagMayorA == 1 || numero > numeroMaximo) //uso numero y veo cual es el mayor de las a
                {
                    numeroMaximo = numero;
                    flagMayorA = 0;
                }
           break;
           case 'e':
                contadorE++;
           break;
           case 'i':
                contadorI++;
           break;
           case 'o':
                contadorO++;
           break;
           case 'u':
                contadorU++;
           break;
       }
   }

    promedioNumeros = (float)acumuladorNumeros / i;

    printf("El promedio de los numeros es: %.2f\n", promedioNumeros);
    printf("Se ingresaron %d letras a\n", contadorA);
    printf("Se ingresaron %d letras e\n", contadorE);
    printf("Se ingresaron %d letras i\n", contadorI);
    printf("Se ingresaron %d letras o\n", contadorO);
    printf("Se ingresaron %d letras u\n", contadorU);

    if(contadorA > 0)
    {
        printf("El valor maximo de las a es: %d\n", numeroMaximo);
    }
    else
    {
        printf("No se ha ingresado ninguna a\n");
    }

    printf("El producto de todos los numeros es: %d", producto);

    return 0;
}
