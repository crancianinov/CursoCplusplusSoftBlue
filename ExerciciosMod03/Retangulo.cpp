#include "Retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(char nome[], int largura, int altura) : FiguraGeometrica(nome)
{
	this->largura = largura;
	this->altura = altura;
}

void Retangulo::calcularArea()
{
	int area = this->largura * this->altura;
	cout << "A area do " << this->nome << ": " << area << endl;
}

Retangulo::~Retangulo()
{
}
