#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

#define getch() _getch()


struct Nodo {
	int dato;
	Nodo* siguiente;
};

void agregarElementoALaPila(Nodo *&, int);//prototipo

void sacarElementoALaPila(Nodo*&, int&);//prototipo

int main() {

	Nodo *pila = NULL;
	int dato;


	cout << "digite un numero: ";
	cin >> dato;
	agregarElementoALaPila(pila, dato);

	cout << "digite otro numero: ";
	cin >> dato;
	agregarElementoALaPila(pila, dato);

	cout << "\nSacando elementos de la pila: ";
	while (pila != NULL)
	{
		sacarElementoALaPila(pila, dato);
		if (pila != NULL)
		{
			cout << dato << ",";
		}
		else
		{
			cout << dato << ".";
		}
	}



	getch();
	return 0;
}


void agregarElementoALaPila(Nodo *&pila, int n)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;

	cout << "\nElemento " << n << " agregado a la PILA correctamente";
}

//1.
//  crear espacio en memoria para un nuevo nodo
//  incluir stdlib.h para el new
//2.
//  ingresar un dato en el nodo
//
//
//
//
//
//


void sacarElementoALaPila(Nodo*& pila, int& n)
{
	Nodo* aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
