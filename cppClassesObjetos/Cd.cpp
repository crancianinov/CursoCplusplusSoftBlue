#include "Cd.h"
#include <iostream>
#include <string>

using namespace std;

Cd::Cd()
{
}

Cd::Cd(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao, unsigned int faixas) : Digital(codigo, titulo, discos, duracao)
{

	this->setFaixas(faixas);
}

Cd::~Cd()
{
}

void Cd::setFaixas(unsigned int faixas)
{
	this->faixas = faixas;
}
unsigned int Cd::getFaixas()
{
	return this->faixas;
}
void Cd::showInfo()
{
	cout << "\n\nCd: ";
	cout << "\n codigo(" << this->getCodigo() << ") ";
	cout << "\n titulo(" << this->getTitulo() << ") ";
	cout << "\n discos(" << this->getDiscos() << ") ";
	cout << "\n duracao(" << this->getDuracao() << ") ";
	cout << "\n faixas(" << this->getFaixas() << ") ";
}