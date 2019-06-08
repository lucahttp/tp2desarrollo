
#pragma once

#ifndef _LIBRERIALOCA_H_
#define _LIBRERIALOCA_H_



struct medallonDeCarne
{
	float precio;
	float grasocidad;
	float grosor;
};

struct bebida
{
	float precio;
	float marca;
	float sabor;
};

struct panceta
{
	float precio;
	float grasocidad;
	float pointCoccion;
};

struct cheddar
{
	float precio;
	float grasocidad;
};

struct pan
{
	float precio;
	bool integral;
};



#endif // _LIBRERIALOCA_H_ 




/*

1.Nos  han  solicitado  el  desarrollo  de  un  sistema  para  una
cadena  de  comida  r�pida  muy  famosa  en  todo  el mundo.
En primer lugar, necesitaremos modelar los diferentes alimentos,
agregados y bebidas que pueden ser comercializados.
Ellos son :

	a.Paty :	deber� tener un precio,
				un nivel de grasa,
				y un grosor(en cm).

	b.Gaseosa :	deber� tener un precio,
				una marca,
				y un sabor.

	c.Panceta : deber� tener un precio
				y un nivel de grasa,
				as� como tambi�n un punto de cocci�n.

	d.Cheddar : deber� tener un precio
				y un nivel de grasa.

	e.Pan :		deber� tener un precio
				y el detalle de si es integral o no.

Se pide modelar las estructuras necesarias que cumplan con los puntos a, b, c y d.

*/