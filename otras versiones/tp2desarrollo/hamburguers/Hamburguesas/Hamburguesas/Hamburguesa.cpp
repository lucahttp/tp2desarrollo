#include "pch.h"
#include "Structs.h"
#include <iostream>

Hamburguesa* hamburguesaCreate(Pan *panSuperior, Pan *panInferior) {
	Hamburguesa *unaHamburguesa = new Hamburguesa;
	unaHamburguesa->panInferior = panInferior;
	unaHamburguesa->panSuperior = panSuperior;
	unaHamburguesa->patys = listaPatyCreate();
	unaHamburguesa->pancetas = listaPancetaCreate();
	unaHamburguesa->cheddars = listaCheddarCreate();
	return unaHamburguesa;
}

void hamburguesaAgregarCheddar(Hamburguesa *unaHamburguesa, Cheddar *cheddar) {
	NodoCheddar *nodoCheddar = nodoCheddarCreate(cheddar);
	listaCheddarAgregarNodo(unaHamburguesa->cheddars, nodoCheddar);
}

void hamburguesaAgregaPaty(Hamburguesa *unaHamburguesa, Paty *unPaty) {
	NodoPaty *nodoPaty = nodoPatyCreate(unPaty);
	listaPatyAgregarNodo(unaHamburguesa->patys,nodoPaty);
}

void hamburguesaMostratePorPantalla(Hamburguesa *unaHamburguesa) {
	cout << "Estoy compuesta por:" << endl;
	cout << "- PAN INFERIOR " << panTipo(unaHamburguesa->panInferior) << " QUE CUESTA $" << panPrecio(unaHamburguesa->panInferior) << endl;
	cout << "- PAN SUPERIOR " << panTipo(unaHamburguesa->panSuperior) << " QUE CUESTA $" << panPrecio(unaHamburguesa->panSuperior) << endl;
	hamburguesaMostraPatysPorPantalla(unaHamburguesa);
	// SIMILAR A LA ANTERIOR, DEBERIA MOSTRAR CHEDDAR Y PANCETA
}

void hamburguesaMostraPatysPorPantalla(Hamburguesa *unaHamburguesa) {
	NodoPaty *nodoPatyAux = unaHamburguesa->patys->primerElemento;
	while (nodoPatyAux != NULL) {
		cout << "- PATY DE PRECIO $" << nodoPatyAux->unPaty->precio << endl; // < --- DEBERIA UTILIZAR LAS FUNCIONES DEL TAD PATY
		nodoPatyAux = nodoPatyAux->siguiente;
	}
}