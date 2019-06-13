
#include <stdlib.h>

#include <iostream.h>

#include <sstream.h>

#include "estructuras.h"

using namespace std;

//////////////////////////
//constructor hamburguesa


Fantasticarne* agregarHamburguesa(Pan* pancitoSuperior, Pan* pancitoInferior)
{
	Fantasticarne* nueva_hamburguesa = new Fantasticarne;
	nueva_hamburguesa->pancitoSuperior = pancitoSuperior;
	nueva_hamburguesa->pancitoInferior = pancitoInferior;
	nueva_hamburguesa->patys = patys;
	nueva_hamburguesa->cheddars = cheddars;
	nueva_hamburguesa->pancetas = pancetas;
	return nueva_hamburguesa;
}
