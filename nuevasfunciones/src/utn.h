/*
 * utn.h
 *
 *  Created on: 6 sep. 2022
 *      Author: Nahuel
 */

/**
 * \brief Obtien un numero entero
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \return Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
 *
 */
int getInt(int* pResultado);
/**
 * \brief Verifica si la cadena ingresada es numerica
 * \param cadena Cadena de caracteres a ser analizada
 * \return Retorna 1 (verdadero) si la cadena es numerica y 0 (falso) si no lo es
 *
 */
int esNumerica(char* cadena, int limite);
int esSoloLetra(char *pResultado);
int esLetraConEspacio(char *pResultado);
int getNumeroDeTelefono(char* cadena, int longitud);
int esNumeroDeTelefono(char* cadena);
int getAlfanumerico(char* cadena, int longitud);
int esAlfanumerico(char* cadena);
/**
 * \brief 	Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
 * 			un máximo de 'longitud - 1' caracteres.
 * \param pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * \param longitud Define el tamaño de cadena
 * \return Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
 *
 */
int myGets(char* cadena, int longitud);
void formarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);
int ordenarArrayDecrecienteNegativos(int array[], int cantidadElementos);
int imprimirListaEnterosNegativos(int array[], int cantidadElementos);
int ordenarArrayCrecientePositivos(int array[], int cantidadElementos);
int imprimirListaEnterosPositivos(int array[], int cantidadElementos);
int calcularMayorNegativos(int array[], int cantidadElementos, int* pMayorNegativos);
int promediarPositivosArray(int array[], int cantidadElementos, float* pPromedioPositivos);
int inicializarArray(int array[], int cantidadElementos);
int imprimirPosicionesImpares(int array[], int cantidadElementos);
int listarMayoresAQuince(int array[], int cantidadElementos);
int determinarMayorPares(int array[], int cantidadElementos, int flagPares, int* pMayorPares);
int sumarImpares(int array[], int cantidadElementos, int acumuladorImpares, int* pAcumuladorImpares);
int contarNegativos(int array[], int cantidadElementos, int contadorNegativos, int* pContadorNegativos);
int calcularMaximo(int array[], int cantidadElementos, int* pMaximo);
void mostrarEntero(int numeroEntero);
float retornarFlotante(void);
int determinarParidad(int num);
void mostrarEnteroLimite(int numeroEntero);
float retornarFlotanteLimite(void);
float realizarDescuento(int num);
int realizarOperacion(int num1, int num2, char operador);
int sumarConPuntero(int numero1, int numero2, int* resultado);
int pedirNumero(int* pNumero);
int dividirEnteros(int operador1, int operador2, float* pResultado);
/**
 * \brief Solicita un numero al usuario, leuego de verificarlo devuelve el resultado
 * \param pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \param mensaje Es el mensaje a ser mostrado
 * \param mensajeError Es el mensaje de Error a ser mostrado
 * \param minimo Es el numero maximo a ser aceptado
 * \param maximo Es el minimo minimo a ser aceptado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 *
 */
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
int seguirCarga(char* pRespuesta);
int loguear(int* pFlagLoguearse);
int comprar(int flagLoguearse, int* pFlagCompra);
int mostrarCompras(int flagLoguearse, int flagCompra);
int vender(int subOpcion, int flagLoguearse, int flagPrimerVenta, int* pFlagPrimerVenta, int flagCompra);
int cargarArrayEnteros(int array[], int cantidadElementos);
int contarPositivosYNegativos(int array[], int cantidadElementos, int contadorPositivos, int contadorNegativos, int* pContadorPositivos, int* pContadorNegativos);
int sumarPares(int array[], int cantidadElementos, int acumuladorPares, int* pAcumuladorPares);
int sumarEnteros(int array[], int cantidadElementos, int acumuladorEnteros, int* pAcumuladorEnteros);
int determinarMayorImpares(int array[], int cantidadElementos, int flagImpares, int* mayorImpares);
int imprimirListaEnteros(int array[], int cantidadElementos);
int imprimirPares(int array[], int cantidadElementos);
int imprimirImpares(int array[], int cantidadElementos);
float calcularYRetornarPromedio(int array[], int cantidadElementos);

#ifndef UTN_H_
#define UTN_H_



#endif /* UTN_H_ */
