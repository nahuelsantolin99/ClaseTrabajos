/*
 * funMatrizABM.h
 *
 *  Created on: 25 sep. 2022
 *      Author: Nahuel
 */

#ifndef FUNMATRIZABM_H_
#define FUNMATRIZABM_H_

int ordenarPorCodigo(char codigo[][5], char modelo[][11], int cantidad[], float precio[], int cantidadProductos);
int modificarModelo(char modelo[][11]);
int modificarPrecio(float precio[]);
int cargarProductos(char codigo[][5], char modelo[][11], int cantidadProductos[], float precio[], int cantidadCarga);
int imprimirProductos(char codigo[][5], char modelo[][11], int cantidadProductos[], float precio[], int cantidad);
int preguntarIndex(const char* mensaje, int* pAuxIndex);
int venderProductos(int cantidadProductos[]);

#endif /* FUNMATRIZABM_H_ */
