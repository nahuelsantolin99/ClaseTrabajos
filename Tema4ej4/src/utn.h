/*
 * utn.h
 *
 *  Created on: 6 sep. 2022
 *      Author: Nahuel
 */

void mostrarEntero(int numeroEntero);
float retornarFlotante(void);
int determinarParidad(int num);
void mostrarEnteroLimite(int numeroEntero);
float retornarFlotanteLimite(void);
float realizarDescuento(int num);
float realizarDiezPorCientoDescuento(int num);
int realizarOperacion(int num1, int num2, char operador);
int sumarConPuntero(int numero1, int numero2, int* resultado);
int pedirNumero(int* pNumero);
int dividirEnteros(int operador1, int operador2, float* pResultado);
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
int seguirCarga(char* pRespuesta);
int loguear(int* pFlagLoguearse);
int comprar(int flagLoguearse, int* pFlagCompra);
int mostrarCompras(int flagLoguearse, int flagCompra);
int vender(int subOpcion, int flagLoguearse, int flagPrimerVenta, int* pFlagPrimerVenta, int flagCompra);

#ifndef UTN_H_
#define UTN_H_



#endif /* UTN_H_ */
