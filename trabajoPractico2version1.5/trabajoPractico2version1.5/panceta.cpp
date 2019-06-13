
#include <stdlib.h>

#include <iostream.h>

#include <sstream.h>

#include "estructuras.h"

using namespace std;

Panceta* agregarPanceta(float precio, int grasocidad, int pCoccion) {
	Panceta* nueva_panceta = new Bebida;
	nueva_panceta->precio = precio;
	nueva_panceta->grasocidad = grasocidad;
	nueva_panceta->pCoccion = pCoccion;
	return nueva_panceta;
}








//
//
//
// ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄        ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄ 
//▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌      ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
//▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌     ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀▀▀  ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌
//▐░▌       ▐░▌▐░▌       ▐░▌▐░▌▐░▌    ▐░▌▐░▌          ▐░▌               ▐░▌     ▐░▌       ▐░▌
//▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░▌ ▐░▌   ▐░▌▐░▌          ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌     ▐░█▄▄▄▄▄▄▄█░▌
//▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌  ▐░▌  ▐░▌▐░▌          ▐░░░░░░░░░░░▌     ▐░▌     ▐░░░░░░░░░░░▌
//▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░▌   ▐░▌ ▐░▌▐░▌          ▐░█▀▀▀▀▀▀▀▀▀      ▐░▌     ▐░█▀▀▀▀▀▀▀█░▌
//▐░▌          ▐░▌       ▐░▌▐░▌    ▐░▌▐░▌▐░▌          ▐░▌               ▐░▌     ▐░▌       ▐░▌
//▐░▌          ▐░▌       ▐░▌▐░▌     ▐░▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄      ▐░▌     ▐░▌       ▐░▌
//▐░▌          ▐░▌       ▐░▌▐░▌      ▐░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌     ▐░▌     ▐░▌       ▐░▌
// ▀            ▀         ▀  ▀        ▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀       ▀       ▀         ▀ 
//                                                                                         
//




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





 //  _____                    _                        _   _        _        _____                     _        
 // / ____|                  | |                      | \ | | ___  | |      |  __ \                   | |       
 //| |     _ __ ___  __ _  __| | ___  _ __ ___  ___   |  \| |( _ ) | |      | |__) |_ _ _ __   ___ ___| |_ __ _ 
 //| |    | '__/ _ \/ _` |/ _` |/ _ \| '__/ _ \/ __|  | . ` |/ _ \/\ |      |  ___/ _` | '_ \ / __/ _ \ __/ _` |
 //| |____| | |  __/ (_| | (_| | (_) | | |  __/\__ \  | |\  | (_>  < |____  | |  | (_| | | | | (_|  __/ || (_| |
 // \_____|_|  \___|\__,_|\__,_|\___/|_|  \___||___/  |_| \_|\___/\/______| |_|   \__,_|_| |_|\___\___|\__\__,_|



//creador de nodos y listas de medallones

ListaCheddar* agregoUnaListaDeheddars() {
	ListaCheddar* nueva_lista = new ListaCheddar;
	nueva_lista->primerCheddar = NULL;
	return nueva_lista;
}

NodoCheddar* agregarUnNodoDeTipoCheddar(Cheddar* nuevo_cheddar) {
	NodoCheddar* nuevo_nodo_cheddar = new NodoCheddar;
	nuevo_nodo_cheddar->nuevo_cheddar = nuevo_cheddar;
	nuevo_nodo_cheddar->nuevo_cheddar = NULL;
	return nuevo_nodo_cheddar;
}

// ______                _                          _   _        _        _____                     _        
//|  ____|              (_)                        | \ | | ___  | |      |  __ \                   | |       
//| |__ _   _ _ __   ___ _  ___  _ __   ___  ___   |  \| |( _ ) | |      | |__) |_ _ _ __   ___ ___| |_ __ _ 
//|  __| | | | '_ \ / __| |/ _ \| '_ \ / _ \/ __|  | . ` |/ _ \/\ |      |  ___/ _` | '_ \ / __/ _ \ __/ _` |
//| |  | |_| | | | | (__| | (_) | | | |  __/\__ \  | |\  | (_>  < |____  | |  | (_| | | | | (_|  __/ || (_| |
//|_|   \__,_|_| |_|\___|_|\___/|_| |_|\___||___/  |_| \_|\___/\/______| |_|   \__,_|_| |_|\___\___|\__\__,_|
//                             


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// funcion para agregar un nodo a la lista ya antes creada por la funcion agregar hamburguesa

void agregarUnNodoALaListaDeCheddar(ListaCheddar* lista, NodoCheddar* nodoCheddar) {
	if (listaCheddarEstaVacia(lista)) {
		lista->primerElemento = nodoCheddar;
	}
	else {
		NodoCheddar* ultimoNodo = punteroAElUltimoNodoDeLaListaDeCheddars(lista);
		ultimoNodo->siguiente = nodoCheddar;
	}
}

//cosas usadas por agregar nodo a una lista


bool listaCheddarEstaVacia(ListaCheddar* lista) {
	return lista->primerElemento == NULL;
}

//listaPatyUltimoElemento
NodoCheddar* punteroAElUltimoNodoDeLaListaDeCheddars(ListaCheddar* lista) {

	NodoCheddar* nodoAuxiliar = lista->primerElemento;
	while (nodoAuxiliar->siguiente != NULL)
	{
		nodoAuxiliar = nodoAuxiliar->siguiente;
	}
	return nodoAuxiliar;
}



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





