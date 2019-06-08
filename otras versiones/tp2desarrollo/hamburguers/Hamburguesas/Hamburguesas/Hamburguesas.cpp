// Hamburguesas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include "Structs.h"

int main()
{
	Pan *panSuperior = panCreate(10.50, true);
	Pan *panInferior = panCreate(6.70, false);
	Paty *unPaty = patyCreate(25.50,ALTO, 3);
	Paty *otroPaty = patyCreate(30.00, MEDIO, 4);
	Hamburguesa *unaHamburguesa = hamburguesaCreate(panSuperior, panInferior);
	hamburguesaAgregarCheddar(unaHamburguesa, cheddarCreate(13.70,ALTO));
	hamburguesaAgregaPaty(unaHamburguesa, unPaty);
	hamburguesaAgregaPaty(unaHamburguesa, otroPaty);
	hamburguesaMostratePorPantalla(unaHamburguesa);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
