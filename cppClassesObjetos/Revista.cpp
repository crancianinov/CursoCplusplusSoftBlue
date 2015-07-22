#include "Revista.h"
#include <iostream>
#include <string>

using namespace std;

Revista::Revista()
{
	cout << "\nContrutor padrao invocado\n";
}

Revista::Revista(unsigned int codigo, string titulo, string editora, unsigned int paginas, unsigned int ano, unsigned int mes)
	: Impressa(codigo, titulo, editora, paginas)
{
	cout << "\nInicializando construtor parametrizavel\n";

	this->setAno(ano);
	this->setMes(mes);


	cout << "\nFinalizando construtor parametrizavel\n";
}

Revista::~Revista()
{
}



void Revista::setAno(unsigned int ano)
{
	this->ano = ano;
}

unsigned int Revista::getAno()
{
	return this->ano;
}

void Revista::setMes(unsigned int mes)
{
	this->mes = mes;
}

unsigned int Revista::getMes()
{
	return this->mes;
}

void Revista::showInfo()
{
	cout << "\n\nRevista: ";
	cout << "\n codigo(" << this->getCodigo() << ") ";
	cout << "\n titulo(" << this->getTitulo() << ") ";
	cout << "\n editora(" << this->getEditora() << ") ";
	cout << "\n paginas(" << this->getPaginas() << ") ";
	cout << "\n ano(" << this->getAno() << ") ";
	cout << "\n mes(" << this->getMes() << ") ";
}