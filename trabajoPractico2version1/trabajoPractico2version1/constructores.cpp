
#include <stdlib.h>

#include <iostream.h>

#include <sstream.h>

#include "estructuras.h"

using namespace std;

MedallonDeCarne* agregarMedallon(float precio, int grasocidad, int grosor) {
	MedallonDeCarne* nuevo_medallon = new MedallonDeCarne;
	nuevo_medallon->precio = precio;
	nuevo_medallon->grosor = grosor;
	nuevo_medallon->grasocidad = grasocidad;
	return nuevo_medallon;
}

Bebida* agregarBebida(float precio, Marcax marca, saborBebida sabor) {
	MedallonDeCarne* nueva_bebida = new Bebida;
	nueva_bebida->precio = precio;
	nueva_bebida->marca = marca;
	nueva_bebida->sabor = sabor;
	return nueva_bebida;
}


Panceta* agregarPanceta(float precio, int grasocidad, int pCoccion) {
	Panceta* nueva_panceta = new Bebida;
	nueva_panceta->precio = precio;
	nueva_panceta->grasocidad = grasocidad;
	nueva_panceta->pCoccion = pCoccion;
	return nueva_panceta;
}

Cheddar* agregarCheddar(float precio, int grasocidad) {
	Cheddar* nuevo_cheddar = new Cheddar;
	nuevo_cheddar->precio = precio;
	nuevo_cheddar->grasocidad = grasocidad;
	return nuevo_cheddar;
}


Pan* agregarPan(float precio, bool integral) {
	Pan* nuevo_pan = new Pan;
	nuevo_pan->precio = precio;
	nuevo_pan->integral = integral;
	return nuevo_pan;
}





//////////////////////////
//constructor hamburguesa


Fantasticarne* agregarHamburguesa(Pan* pancitoSuperior, Pan* pancitoInferior)
{
	Fantasticarne* nueva_hamburguesa = new Fantasticarne;
	nueva_hamburguesa->pancitoSuperior = pancitoSuperior;
	nueva_hamburguesa->pancitoInferior = pancitoInferior;
	nueva_hamburguesa->patys = patys;
	nueva_hamburguesa->cheddars = cheddars;
	nueva_hamburguesa->pancetas = pancetas;
	return nueva_hamburguesa;
}

