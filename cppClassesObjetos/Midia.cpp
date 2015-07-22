#include "Midia.h"
#include <iostream>
#include <string>

using namespace std;

Midia::Midia()
{
}

Midia::Midia(unsigned int codigo, string titulo)
{
	this->setCodigo(codigo);
	this->setTitulo(titulo);
	instancias++;
}

Midia::~Midia()
{
}

void Midia::setCodigo(unsigned int codigo)
{
	this->codigo = codigo;
}

unsigned int Midia::getCodigo()
{
	return this->codigo;
}

void Midia::setTitulo(string titulo)
{
	this->titulo = titulo;
}

string Midia::getTitulo()
{
	return this->titulo;
}

int Midia::getInstancias()
{
	return instancias;
}

int Midia::instancias = 0;