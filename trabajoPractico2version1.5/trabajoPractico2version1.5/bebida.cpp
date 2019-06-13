
#include <stdlib.h>

#include <iostream.h>

#include <sstream.h>

#include "estructuras.h"

using namespace std;


Bebida* agregarBebida(float precio, Marcax marca, saborBebida sabor) {
	MedallonDeCarne* nueva_bebida = new Bebida;
	nueva_bebida->precio = precio;
	nueva_bebida->marca = marca;
	nueva_bebida->sabor = sabor;
	return nueva_bebida;
}


// ____       _     _     _       
//|  _ \     | |   (_)   | |      
//| |_) | ___| |__  _  __| | __ _ 
//|  _ < / _ \ '_ \| |/ _` |/ _` |
//| |_) |  __/ |_) | | (_| | (_| |
//|____/ \___|_.__/|_|\__,_|\__,_|
//                                

////////////////////////////////////////////////////////////////////////////
//no hay struct de nodo y lista para las gaseosas

