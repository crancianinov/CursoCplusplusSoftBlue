#include "Circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo(char nome[], int raio) : FiguraGeometrica(nome)
{
	this->raio = raio;
}

void Circulo::calcularArea()
{
	double area = 3.14 * (this->raio * this->raio);
	cout << "Area do " << this->nome << ": " << area << endl;
}


Circulo::~Circulo()
{
}
