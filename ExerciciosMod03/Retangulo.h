#pragma once
#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
private:
	int largura;
	int altura;

public:
	Retangulo(char nome[], int largura, int altura);
	~Retangulo();
	void calcularArea();


	
};

