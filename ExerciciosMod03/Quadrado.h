#pragma once
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
private:
	int largura;

public:
	Quadrado(char nome[], int largura);
	~Quadrado();
	void calcularArea();
};

