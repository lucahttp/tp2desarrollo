//precios con iva

#include <stdlib.h>
#include <iostream.h>
#include <sstream.h>

#include "estructuras.h"
using namespace std;

const int iva = 0, 21;


float precioConIva(float precioSinIva) {
	return precioSinIva * (1 + iva);
}



float medallonConIva(MedallonDeCarne* nuevo_medallon)
{
	return precioConIva(nuevo_medallon->precio);
}

float bebidaConIva(Bebida* nueva_bebida)
{
	return precioConIva(nueva_bebida->precio);
}

float pancetaConIva(Panceta* nueva_panceta)
{
	return precioConIva(nueva_panceta->precio);
}

float cheddarConIva(Cheddar* nuevo_cheddar)
{
	return precioConIva(nuevo_cheddar->precio);
}

