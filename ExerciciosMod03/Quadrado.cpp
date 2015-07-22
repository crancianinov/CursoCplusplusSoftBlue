#include "Quadrado.h"
#include <iostream>
using namespace std;

Quadrado::Quadrado(char nome[], int largura) : FiguraGeometrica(nome)
{
	this->largura = largura;
}

void Quadrado::calcularArea()
{
	int area = this->largura * this->largura;
	cout << "Area do " << this->nome << ": " << area << endl;
}

Quadrado::~Quadrado()
{
}
