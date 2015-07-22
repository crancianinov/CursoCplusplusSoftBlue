#include "Dvd.h"
#include <string>
#include <iostream>

using namespace std;

Dvd::Dvd()
{
}

Dvd::Dvd(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao, unsigned int regiao, string legendas) 
	: Digital(codigo, titulo, discos, duracao)
{
	
	this->setRegiao(regiao);
	this->setLegendas(legendas);
}

Dvd::~Dvd()
{
}

void Dvd::setRegiao(unsigned int regiao)
{
	this->regiao = regiao;
}
unsigned int Dvd::getRegiao()
{
	return this->regiao;
}

void Dvd::setLegendas(string legendas)
{
	this->legendas = legendas;
}
string Dvd::getLegendas()
{
	return this->legendas;
}
void Dvd::showInfo()
{
	cout << "\n\nDvd: ";
	cout << "\n codigo(" << this->getCodigo() << ") ";
	cout << "\n titulo(" << this->getTitulo() << ") ";
	cout << "\n discos(" << this->getDiscos() << ") ";
	cout << "\n duracao(" << this->getDuracao() << ") ";
	cout << "\n regiao(" << this->getRegiao() << ") ";
	cout << "\n legendas(" << this->getLegendas() << ") ";
}