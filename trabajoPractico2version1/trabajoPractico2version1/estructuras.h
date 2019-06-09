#pragma once


enum Marcax {
	COCA = 3, PEPSI = 2, MANAOS = 1
};
enum SaborBebida {
	ORIGINAL = 3, LIGHT = 2, ZERO = 1
};

struct MedallonDeCarne
{
	float precio;
	int grasocidad;
	int grosor;
};
struct Bebida
{
	float precio;
	Marcax marca;
	SaborBebida sabor;
};
struct Panceta
{
	float precio;
	int grasocidad;
	int pCoccion;
};
struct Cheddar
{
	float precio;
	int grasocidad;
};
struct Pan
{
	float precio;
	bool integral;
};