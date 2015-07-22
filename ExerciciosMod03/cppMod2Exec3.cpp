#include "Circulo.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "\nResolucao exercicio 2 (Heranca e polimorfismo)\n\n";

	Retangulo *figuraGeometrica1 = new Retangulo("Meu retangulo", 2, 4);
	figuraGeometrica1->calcularArea();

	Quadrado *figuraGeometrica2 = new Quadrado("Meu quadrado", 3);
	figuraGeometrica2->calcularArea();

	Circulo *figuraGeometrica3 = new Circulo("Meu circulo", 5);
	figuraGeometrica3->calcularArea();

	cout << endl;
	return 0;
}