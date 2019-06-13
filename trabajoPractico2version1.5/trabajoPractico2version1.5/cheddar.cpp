
#include <stdlib.h>

#include <iostream.h>

#include <sstream.h>

#include "estructuras.h"

using namespace std;

Cheddar* agregarCheddar(float precio, int grasocidad) {
	Cheddar* nuevo_cheddar = new Cheddar;
	nuevo_cheddar->precio = precio;
	nuevo_cheddar->grasocidad = grasocidad;
	return nuevo_cheddar;
}





// ▄▄▄▄▄▄▄▄▄▄▄  ▄         ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄ 
//▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ ▐░░░░░░░░░░▌ ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
//▐░█▀▀▀▀▀▀▀▀▀ ▐░▌       ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌
//▐░▌          ▐░▌       ▐░▌▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌
//▐░▌          ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░▌       ▐░▌▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌
//▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌
//▐░▌          ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░▌       ▐░▌▐░▌       ▐░▌▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀█░█▀▀ 
//▐░▌          ▐░▌       ▐░▌▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌       ▐░▌▐░▌     ▐░▌  
//▐░█▄▄▄▄▄▄▄▄▄ ▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░█▄▄▄▄▄▄▄█░▌▐░▌       ▐░▌▐░▌      ▐░▌ 
//▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ ▐░░░░░░░░░░▌ ▐░▌       ▐░▌▐░▌       ▐░▌
// ▀▀▀▀▀▀▀▀▀▀▀  ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀   ▀         ▀  ▀         ▀ 


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






 //  _____                    _                        _   _            _          _____ _              _     _            
 // / ____|                  | |                      | \ | |   ___    | |        / ____| |            | |   | |           
 //| |     _ __ ___  __ _  __| | ___  _ __ ___  ___   |  \| |  ( _ )   | |       | |    | |__   ___  __| | __| | __ _ _ __ 
 //| |    | '__/ _ \/ _` |/ _` |/ _ \| '__/ _ \/ __|  | . ` |  / _ \/\ | |       | |    | '_ \ / _ \/ _` |/ _` |/ _` | '__|
 //| |____| | |  __/ (_| | (_| | (_) | | |  __/\__ \  | |\  | | (_>  < | |____   | |____| | | |  __/ (_| | (_| | (_| | |   
 // \_____|_|  \___|\__,_|\__,_|\___/|_|  \___||___/  |_| \_|  \___/\/ |______|   \_____|_| |_|\___|\__,_|\__,_|\__,_|_|   



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


// ______                _                          _   _            _          _____ _              _     _            
//|  ____|              (_)                        | \ | |   ___    | |        / ____| |            | |   | |           
//| |__ _   _ _ __   ___ _  ___  _ __   ___  ___   |  \| |  ( _ )   | |       | |    | |__   ___  __| | __| | __ _ _ __ 
//|  __| | | | '_ \ / __| |/ _ \| '_ \ / _ \/ __|  | . ` |  / _ \/\ | |       | |    | '_ \ / _ \/ _` |/ _` |/ _` | '__|
//| |  | |_| | | | | (__| | (_) | | | |  __/\__ \  | |\  | | (_>  < | |____   | |____| | | |  __/ (_| | (_| | (_| | |   
//|_|   \__,_|_| |_|\___|_|\___/|_| |_|\___||___/  |_| \_|  \___/\/ |______|   \_____|_| |_|\___|\__,_|\__,_|\__,_|_|   



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// funcion para agregar un nodo a la lista ya antes creada por la funcion agregar hamburguesa

void cheddarAgregarUnNodo(ListaCheddar* lista, NodoCheddar* nodoCheddar) {
	if (CheddarListaVacia(lista)) {
		lista->primerElemento = nodoCheddar;
	}
	else {
		NodoCheddar* ultimoNodo = punteroAElUltimoNodoDeLaListaDeCheddars(lista);
		ultimoNodo->siguiente = nodoCheddar;
	}
}

//cosas usadas por agregar nodo a una lista


bool CheddarListaVacia(ListaCheddar* lista) {
	return lista->primerElemento == NULL;
}
//listaPatyUltimoElemento
NodoCheddar* cheddarPunteroAUltimoNodo(ListaCheddar* lista)
{
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

