#pragma once
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
private:
	int raio;

public:
	Circulo(char nome[], int raio);
	~Circulo();
	void calcularArea();
};

