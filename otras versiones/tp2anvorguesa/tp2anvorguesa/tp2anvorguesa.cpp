#include <iostream>
#include <sstream>

//diferentes puntos
#include "punto1.h"

using namespace std;


MedallonDeCarne* agregarElementoAPaty(float precio, float grasocidad, float grosor);

void inicializacionDeCosas();
int main()
{
    std::cout << "Hello World!\n";

}





///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
//			PUNTO 2
///////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////



MedallonDeCarne* agregarElementoAPaty(float precio, float grasocidad, float grosor)
{
	MedallonDeCarne* paty = new MedallonDeCarne();
	paty-> precio = precio;
	paty-> grasocidad = grasocidad;
	paty-> grosor = grosor;
	cout << "\nfelicidades se ha creado un paty";
}







// que va a tomar
// TADS
//https://www.youtube.com/watch?v=43J-ug4xUXY
// Structs
//
// punteros
//https://www.youtube.com/watch?v=XNXdytXmYVM
// pilas = listas
//https://www.youtube.com/watch?v=joAw2jWgZqA
// divicion de archivos
//https://www.youtube.com/watch?v=yjWVG_ClxAw



void inicializacionDeCosas(void)
{

}

