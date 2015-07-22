#pragma once
class FiguraGeometrica
{
protected:
	char nome[50];

public:
	FiguraGeometrica(char nome[]);
	~FiguraGeometrica();
	void calcularArea();
};

