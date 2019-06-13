
#include <stdlib.h>

#include <iostream.h>

#include <sstream.h>

#include "estructuras.h"

using namespace std;


Pan* agregarPan(float precio, bool integral) {
	Pan* nuevo_pan = new Pan;
	nuevo_pan->precio = precio;
	nuevo_pan->integral = integral;
	return nuevo_pan;
}
/*

string panTipo(Pan* unPan) {
	if (unPan->esIntegral)
		return "INTEGRAL";
	else
		return "NO INTEGRAL";
}

float panPrecio(Pan* unPan) {
	return unPan->precio;
}

*/
