/********************************************************************************
string.h
size_t strlen(const char *str)
char *strcat(char *dest, const char *src)
char *strncat(char *dest, const char *src, size_t n)
int strcmp(const char *str1, const char *str2)
int strncmp(const char *str1, const char *str2, size_t n)
char *strcpy(char *dest, const char *src)
char *strncpy(char *dest, const char *src, size_t n)

ctype.h
int toupper(int c)
int tolower(int c)

ASCII: https://elcodigoascii.com.ar/
*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM_CADENA 10

int main(void) {
	setbuf(stdout, NULL);

	return 0;
}

/*******************************************************************************
 * CREAR FUNCIONES
 * 1) Que convierta una cadena a MAYUSCULA (Replicar toupper())
 * 2) Que convierta una cadena a MINUSCULA (Replicar tolower())
 * 3) Que copie un LITERAL a una CADENA validando tamaño del literal
 * 4) Que VALIDE si todos sus caracteres son ALFABETICOS
 * 5) Que PIDA y GUARDE un LITERAL en una CADENA con el siguiente head:
 * int Get_String(char* MSJ, char* ERROR_MSJ, char* pString, int TAM);
 ******************************************************************************/

