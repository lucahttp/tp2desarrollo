#include "pch.h"
#include "Structs.h"

Pan* panCreate(float precio, bool esIntegral) {
	Pan *unPan = new Pan;
	unPan->precio = precio;
	unPan->esIntegral = esIntegral;
	return unPan;
}

string panTipo(Pan *unPan) {
	if (unPan->esIntegral)
		return "INTEGRAL";
	else
		return "NO INTEGRAL";
}

float panPrecio(Pan *unPan) {
	return unPan->precio;
}