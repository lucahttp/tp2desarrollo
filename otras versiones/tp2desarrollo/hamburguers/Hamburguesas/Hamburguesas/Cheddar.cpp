#include "pch.h"
#include "Structs.h"

Cheddar* cheddarCreate(float precio, NIVEL_DE_GRASA nivelDeGrasa) {
	Cheddar *cheddar = new Cheddar;
	cheddar->precio = precio;
	cheddar->nivelDeGrasa = nivelDeGrasa;
	return cheddar;
}