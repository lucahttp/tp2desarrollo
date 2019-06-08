#pragma once
#include "pch.h"
#include <string>
using namespace std;

enum NIVEL_DE_GRASA {
	ALTO = 3, MEDIO = 2, BAJO = 1
};

struct Paty {
	float precio;
	NIVEL_DE_GRASA nivelDeGrasa;
	int grosor;
};

struct Gaseosa {
	float precio;
	string marca;
	string sabor;
};

struct Panceta {
	float precio;
	NIVEL_DE_GRASA nivelDeGrasa;
	int puntoDeCoccion;
};

struct Cheddar {
	float precio;
	NIVEL_DE_GRASA nivelDeGrasa;
};

struct Pan {
	float precio;
	bool esIntegral;
};

struct NodoPaty {
	Paty *unPaty;
	NodoPaty *siguiente;
};

struct ListaPaty {
	NodoPaty *primerElemento;
};

struct NodoPanceta {
	Panceta *unaPanceta;
	NodoPanceta *siguiente;
};

struct ListaPanceta {
	NodoPanceta *primerElemento;
};

struct NodoCheddar {
	Cheddar *cheddar;
	NodoCheddar *siguiente;
};

struct ListaCheddar {
	NodoCheddar *primerElemento;
};

struct Hamburguesa {
	Pan *panSuperior;
	Pan *panInferior;
	ListaPaty *patys;
	ListaCheddar *cheddars;
	ListaPanceta *pancetas;
};


Pan* panCreate(float precio, bool esIntegral);
ListaPaty* listaPatyCreate();
NodoPaty* nodoPatyCreate(Paty *unPaty);
ListaCheddar* listaCheddarCreate();
NodoCheddar* nodoCheddarCreate(Cheddar *cheddar);
ListaPanceta* listaPancetaCreate();
NodoPanceta* nodoPancetaCreate(Panceta *panceta);
void listaCheddarAgregarNodo(ListaCheddar *lista, NodoCheddar *nodoCheddar);
bool listaCheddarEstaVacia(ListaCheddar *lista);
NodoCheddar* listaCheddarUltimoElemento(ListaCheddar *lista);
Hamburguesa* hamburguesaCreate(Pan *panSuperior, Pan *panInferior);
void hamburguesaAgregarCheddar(Hamburguesa *unaHamburguesa, Cheddar *cheddar);
Cheddar* cheddarCreate(float precio, NIVEL_DE_GRASA nivelDeGrasa);
string panTipo(Pan *unPan);
float panPrecio(Pan *unPan);
void hamburguesaMostratePorPantalla(Hamburguesa *unaHamburguesa);
void hamburguesaMostraPatysPorPantalla(Hamburguesa *unaHamburguesa);
Paty* patyCreate(float precio, NIVEL_DE_GRASA nivelDeGrasa, int grosor);
void hamburguesaAgregaPaty(Hamburguesa *unaHamburguesa, Paty *unPaty);
void listaPatyAgregarNodo(ListaPaty *lista, NodoPaty *nodoPaty);
bool listaPatyEstaVacia(ListaPaty *lista);
NodoPaty* listaPatyUltimoElemento(ListaPaty *lista);