#include "pch.h"
#include "Structs.h"

ListaPaty* listaPatyCreate() {
	ListaPaty *lista = new ListaPaty;
	lista->primerElemento = NULL;
	return lista;
}

NodoPaty* nodoPatyCreate(Paty *unPaty) {
	NodoPaty *unNodo = new NodoPaty;
	unNodo->unPaty = unPaty;
	unNodo->siguiente = NULL;
	return unNodo;
}

ListaCheddar* listaCheddarCreate() {
	ListaCheddar *lista = new ListaCheddar;
	lista->primerElemento = NULL;
	return lista;
}

NodoCheddar* nodoCheddarCreate(Cheddar *cheddar) {
	NodoCheddar *unNodo = new NodoCheddar;
	unNodo->cheddar = cheddar;
	unNodo->siguiente = NULL;
	return unNodo;
}

ListaPanceta* listaPancetaCreate() {
	ListaPanceta *lista = new ListaPanceta;
	lista->primerElemento = NULL;
	return lista;
}

NodoPanceta* nodoPancetaCreate(Panceta *panceta) {
	NodoPanceta *unNodo = new NodoPanceta;
	unNodo->unaPanceta = panceta;
	unNodo->siguiente = NULL;
	return unNodo;
}

void listaPatyAgregarNodo(ListaPaty *lista, NodoPaty *nodoPaty) {
	if (listaPatyEstaVacia(lista)) {
		lista->primerElemento = nodoPaty;
	}
	else {
		NodoPaty *ultimoNodo = listaPatyUltimoElemento(lista);
		ultimoNodo->siguiente = nodoPaty;
	}
}

bool listaPatyEstaVacia(ListaPaty *lista) {
	return lista->primerElemento == NULL;
}

NodoPaty* listaPatyUltimoElemento(ListaPaty *lista) {
	NodoPaty *nodoAuxiliar = lista->primerElemento;
	while (nodoAuxiliar->siguiente != NULL) {
		nodoAuxiliar = nodoAuxiliar->siguiente;
	}
	return nodoAuxiliar;
}

void listaCheddarAgregarNodo(ListaCheddar *lista, NodoCheddar *nodoCheddar) {
	if (listaCheddarEstaVacia(lista)) {
		lista->primerElemento = nodoCheddar;
	}
	else {
		NodoCheddar *ultimoNodo = listaCheddarUltimoElemento(lista);
		ultimoNodo->siguiente = nodoCheddar;
	}
}

bool listaCheddarEstaVacia(ListaCheddar *lista) {
	return lista->primerElemento == NULL;
}

NodoCheddar* listaCheddarUltimoElemento(ListaCheddar *lista) {
	NodoCheddar *auxiliar = lista->primerElemento;
	while (auxiliar->siguiente != NULL) {
		auxiliar = auxiliar->siguiente;
	}
	return auxiliar;
}