//nodos para listas de componentes para la hamburguesa

#include <stdlib.h>
#include <iostream.h>
#include <sstream.h>

#include "estructuras.h"

using namespace std;

////////////////////////////////////////////////////////////////////////////
//struct de nodo y lista para los medallones
struct NodoMedallon 
{
	MedallonDeCarne *nuevo_medallon;
	NodoMedallon *siguiente;
};

struct ListaMedallon
{
	NodoMedallon *primerPaty;
};

////////////////////////////////////////////////////////////////////////////
//no hay struct de nodo y lista para las gaseosas


////////////////////////////////////////////////////////////////////////////
//struct de nodo y lista para la Panceta
struct NodoPanceta
{
	Panceta* nueva_panceta;
	NodoPanceta* siguiente;
};

struct ListaPanceta
{
	NodoPanceta* primerPanceta;
};



////////////////////////////////////////////////////////////////////////////
//struct de nodo y lista para el Cheddar
struct NodoCheddar
{
	Cheddar* nuevo_cheddar;
	NodoCheddar* siguiente;
};

struct ListaCheddar
{
	NodoCheddar* primerCheddar;
};

////////////////////////////////////////////////////////////////////////////
//no hay struct de nodo y lista para los panes


////////////////////////////////////////////////////////////////////////////
//estructura de la hamburguesa
struct Fantasticarne {
	Pan* pancitoSuperior;
	Pan* pancitoInferior;
	ListaMedallon* patys;//aca es donde metemos la cuadruple
	ListaCheddar* cheddars;//aca iria el cheddar dentro del paty
	ListaPanceta* pancetas;//aca iria la panceta
};
