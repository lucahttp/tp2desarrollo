
#include <stdlib.h>

#include <iostream.h>

#include <sstream.h>

#include "estructuras.h"

using namespace std;





MedallonDeCarne* agregarMedallon(float precio, int grasocidad, int grosor) {
	MedallonDeCarne* nuevo_medallon = new MedallonDeCarne;
	nuevo_medallon->precio = precio;
	nuevo_medallon->grosor = grosor;
	nuevo_medallon->grasocidad = grasocidad;
	return nuevo_medallon;
}











// ▄▄       ▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄▄  ▄            ▄            ▄▄▄▄▄▄▄▄▄▄▄  ▄▄        ▄ 
//▐░░▌     ▐░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ ▐░░░░░░░░░░░▌▐░▌          ▐░▌          ▐░░░░░░░░░░░▌▐░░▌      ▐░▌
//▐░▌░▌   ▐░▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌          ▐░▌          ▐░█▀▀▀▀▀▀▀█░▌▐░▌░▌     ▐░▌
//▐░▌▐░▌ ▐░▌▐░▌▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌▐░▌    ▐░▌
//▐░▌ ▐░▐░▌ ▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄█░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌ ▐░▌   ▐░▌
//▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌  ▐░▌  ▐░▌
//▐░▌   ▀   ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░▌       ▐░▌▐░█▀▀▀▀▀▀▀█░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌   ▐░▌ ▐░▌
//▐░▌       ▐░▌▐░▌          ▐░▌       ▐░▌▐░▌       ▐░▌▐░▌          ▐░▌          ▐░▌       ▐░▌▐░▌    ▐░▌▐░▌
//▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌       ▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌▐░▌     ▐░▐░▌
//▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░▌ ▐░▌       ▐░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌      ▐░░▌
// ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀   ▀         ▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀        ▀▀ 
//                                                                                                  



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//video sobre listas 

// https://www.youtube.com/watch?v=o5wJkJJpKtM



 //  _____                    _                        _   _            _         __  __          _       _ _                       
 // / ____|                  | |                      | \ | |   ___    | |       |  \/  |        | |     | | |                      
 //| |     _ __ ___  __ _  __| | ___  _ __ ___  ___   |  \| |  ( _ )   | |       | \  / | ___  __| | __ _| | | ___  _ __   ___  ___ 
 //| |    | '__/ _ \/ _` |/ _` |/ _ \| '__/ _ \/ __|  | . ` |  / _ \/\ | |       | |\/| |/ _ \/ _` |/ _` | | |/ _ \| '_ \ / _ \/ __|
 //| |____| | |  __/ (_| | (_| | (_) | | |  __/\__ \  | |\  | | (_>  < | |____   | |  | |  __/ (_| | (_| | | | (_) | | | |  __/\__ \
 // \_____|_|  \___|\__,_|\__,_|\___/|_|  \___||___/  |_| \_|  \___/\/ |______|  |_|  |_|\___|\__,_|\__,_|_|_|\___/|_| |_|\___||___/
 //                                                                                                                                 
 //                                                                                          

//creador de nodos y listas de medallones



ListaMedallon* medallonAgregarUnaLista() {
	ListaMedallon* nueva_lista = new ListaMedallon;
	nueva_lista->primerPaty = NULL;
	return nueva_lista;
}

NodoMedallon* medallonAgregarUnaNodo(MedallonDeCarne* nuevo_medallon) {
	NodoMedallon* nuevo_nodo_medallon = new NodoMedallon;
	nuevo_nodo_medallon->nuevo_medallon = nuevo_medallon;
	nuevo_nodo_medallon->nuevo_medallon = NULL;
	return nuevo_nodo_medallon;
}


// ______                _                          _   _            _         __  __          _       _ _                       
//|  ____|              (_)                        | \ | |   ___    | |       |  \/  |        | |     | | |                      
//| |__ _   _ _ __   ___ _  ___  _ __   ___  ___   |  \| |  ( _ )   | |       | \  / | ___  __| | __ _| | | ___  _ __   ___  ___ 
//|  __| | | | '_ \ / __| |/ _ \| '_ \ / _ \/ __|  | . ` |  / _ \/\ | |       | |\/| |/ _ \/ _` |/ _` | | |/ _ \| '_ \ / _ \/ __|
//| |  | |_| | | | | (__| | (_) | | | |  __/\__ \  | |\  | | (_>  < | |____   | |  | |  __/ (_| | (_| | | | (_) | | | |  __/\__ \
//|_|   \__,_|_| |_|\___|_|\___/|_| |_|\___||___/  |_| \_|  \___/\/ |______|  |_|  |_|\___|\__,_|\__,_|_|_|\___/|_| |_|\___||___/
//                                                                                                                               



//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// funcion para agregar un nodo a la lista ya antes creada por la funcion agregar hamburguesa

void medallonAgregarUnNodo(ListaMedallon* lista, NodoMedallon* nodoPaty) {
	if (medallonListaEstaVacia(lista)) {
		lista->primerElemento = nodoPaty;
	}
	else {
		NodoMedallon* ultimoNodo = medallonPunteroAUltimoNodo(lista);
		ultimoNodo->siguiente = nodoPaty;
	}
}

//cosas usadas por agregar nodo a una lista


bool medallonListaEstaVacia(ListaMedallon* lista) {
	return lista->primerElemento == NULL;
}



//listaPatyUltimoElemento
NodoMedallon* medallonPunteroAUltimoNodo(ListaMedallon* lista) {

	NodoMedallon* nodoAuxiliar = lista->primerElemento;
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