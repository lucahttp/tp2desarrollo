#include "pch.h"
#include "Structs.h"

Paty* patyCreate(float precio, NIVEL_DE_GRASA nivelDeGrasa, int grosor) {
	Paty *unPaty = new Paty;
	unPaty->precio = precio;
	unPaty->nivelDeGrasa = nivelDeGrasa;
	unPaty->grosor = grosor;
	return unPaty;
}