#include <iostream>
#include <sstream>
using namespace std;
const double iva = 0.21;

double calcularIva(double precioSinIva) {
	return precioSinIva * (1 + iva);
}

struct Paty
{
	double precioPaty;
	int nivelDeGrasaPaty;
	int grosorPaty;
};
struct Gaseosa
{
	double precioGaseosa;
	string marcaGaseosa;
	string unSaborGaseosa;
};
struct Panceta
{
	double precioPanceta;
	int nivelDeGrasaPanceta;	string puntoDeCoccionPanceta;
};
struct Cheddar
{
	double precioCheddar;
	int nivelDeGrasaCheddar;
};
struct Pan
{
	double precioPan;
	bool panIntegralOBlanco;
};
struct ListaPaty
{
	NodoPaty* primerElemento;
};
struct NodoPaty
{
	Paty* unPaty;
	NodoPaty* siguiente;
};
struct ListaPanceta
{
	NodoPanceta* primerElemento;
};
struct NodoPanceta
{
	Panceta* unaPanceta;
	NodoPanceta* siguiente;
};
struct ListaCheddar
{
	NodoCheddars* primerElemento;
};
struct NodoCheddar
{
	Cheddar* unCheddar;
	NodoCheddar* siguiente;
};
struct Hamburguesa
{
	Pan* panSuperior;
	Pan* panInferior;
	ListaPaty* patys;
	ListaPanceta* pancetas;
	ListaCheddar* cheddars;
};

Paty* patyCreate(double precioPaty, int nivelDeGrasaPaty, int grosorPaty) {
	Paty* unPaty = new Paty;
	unPaty->precioPaty = precioPaty;
	unPaty->grosorPaty = grosorPaty;
	unPaty->nivelDeGrasaPaty = nivelDeGrasaPaty;
	return unPaty;
}
Gaseosa* gaseosaCreate(double precioGaseosa, string marcaGaseosa, string unSaborGaseosa) {
	Gaseosa* unaGaseosa = new Gaseosa;
	unaGaseosa->precioGaseosa = precioGaseosa;
	unaGaseosa->unSaborGaseosa = unSaborGaseosa;
	unaGaseosa->marcaGaseosa = marcaGaseosa;
	return unaGaseosa;
}
Panceta* pancetaCreate(double precioPanceta, int nivelDeGrasaPanceta, string puntoDeCoccionPanceta) {
	Panceta* unaPanceta = new Panceta;
	unaPanceta->precioPanceta = precioPanceta;
	unaPanceta->nivelDeGrasaPanceta = nivelDeGrasaPanceta;
	unaPanceta->puntoDeCoccionPanceta = puntoDeCoccionPanceta;
	return unaPanceta;
}
Cheddar* cheddarCreate(double precioCheddar, int nivelDeGrasaCheddar) {
	Cheddar* unCheddar = new Cheddar;
	unCheddar->precioCheddar = precioCheddar;
	unCheddar->nivelDeGrasaCheddar = nivelDeGrasaCheddar;
	return unCheddar;
}
Pan* panCreate(double precioPan, bool panIntegralOBlanco) {
	Pan* unPan = new Pan;
	unPan->precioPan = precioPan;
	unPan->panIntegralOBlanco = panIntegralOBlanco;
	return unPan;
}
ListaPaty* listaPatyCreate() {
	ListaPaty* listaPaty = new ListaPaty;
	listaPaty->primerElemento = NULL;
	return listaPaty;
}
Hamburguesa* hamburguesaCreate(Pan* panSuperior, Pan* panInferior) {
	Hamburguesa* unaHamburguesa = new Hamburguesa;
	unaHamburguesa->panSuperior = panSuperior;
	unaHamburguesa->panInferior = panInferior;
	unaHamburguesa->patys = listaPatyCreate();
}

double patyPrecioFinalConIva(Paty* unPaty) {
	return calcularIva(unPaty->precioPaty);
}
double gaseosaPrecioFinalConIva(Gaseosa* unaGaseosa) {
	return calcularIva(unaGaseosa->precioGaseosa);
}
double pancetaPrecioFinalConIva(Panceta* unaPanceta) {
	return calcularIva(unaPanceta->precioPanceta);
}
double cheddarPrecioFinalConIva(Cheddar* unCheddar) {
	return calcularIva(unCheddar->precioCheddar);
}
double panPrecioFinalConIva(Pan* unPan) {
	return calcularIva(unPan->precioPan);
}

int main()
{

}
/*


struct Direccion {
	string calle;
	int altura;
};

struct Persona {
	string nombre;
	Direccion *direccion;
	int anioDeNacimiento;
};

//struct Lista {
//	Nodo* primerElemento;
//};

//CONSTRUCTOR DE PERSONA
Persona *personaCreate(string nombre, int anioDeNacimiento) {
	Persona *unaPersona = new Persona;
	unaPersona->nombre = nombre;
	unaPersona->anioDeNacimiento = anioDeNacimiento;
	return unaPersona;
}

//CONSTRUCTOR DE DIRECCION
Direccion *direccionCreate(string calle, int altura) {
	Direccion *unaDireccion = new Direccion;
	unaDireccion->calle = calle;
	unaDireccion->altura = altura;
	return unaDireccion;
}


//FUNCION PARA MODIFICAR LA DIRECCION DE PERSONA
void personaSetDireccion(Persona *unaPersona, Direccion *direccion) {
	unaPersona->direccion = direccion;
}

*/
/*
	LISTAS:
	Son el reemplazo de los array para poder variar su longitud, en vez de ser algo fijo tiene NODOS que son cuadraditos solos.
	Los nodos van a tener siempre dos campos, la informacion puede tener tipos de datos complejos como por ej una persona, o simples. Este campo va a ser un puntero.
	El proximo elemento que tambien es un puntero.

	Nodo - > Struct
*/

/*
	TADS:
	Tipo abstracto de dato
	Operaciones:
		-Constructores (SIEMPRE DEBE DEVOLVER UN PUNTERO A ESE TAD) --(NO RECIBE NADA O RECIBE SOLAMENTE PARAMETROS PARA INICIALIZAR)
		-Modificadores (SIEMPRE VAN A SER DE TIPO VOID, --PERO CAUSAN EFECTO COLATERAL--)	--PRIMER PARAMETRO ES EL PUNTERO AL TAD--
		-Analizadores  (DEVUELVEN ALGO)														--PRIMER PARAMETRO ES EL PUNTERO AL TAD--
*/

//Persona unaPersona;
//unaPersona.anioDeNacimiento = 1995;
////unaPersona.direccion.altura = 0;
//Persona *unaPersona =
///* *unaPersona.anioDeNacimiento 
//
//	ESTA FORMA CON PUNTEROS ES LO MISMO QUE:

//	unaPersona->anioDeNacimiento

/*

	TADS:
	Una estructura es un tipo de dato compuesto en donde se pueden guardar distintos tipos de datos.
	Todo ese conjunto de cosas va a ser de ese TIPO de estructura, las estructuras DEFINEN TIPOS.
	Puede contener: int, char, etc.
	O puede contener otras estructuras.
	ES UN TIPO DE DATO Y NO UNA VARIABLE

	VAMOS A DEFINIR LOS NOMBRES DE LAS ESTRUCTURAS CON MAYUSCULA AL PRINCIPIO

	struct nombreDeLaEstructura{
	tipoDeDato1 campo1;
	tipoDeDato2 campo2;
	}



*/


/*
	MATRICES:

	int unaMatriz[2][3];

	for (int fila = 0; fila < 2; fila++)
	{
		for (int columna = 0; columna < 3; columna++)
		{
			cout << unaMatriz[fila][columna];
		}
	}

*/