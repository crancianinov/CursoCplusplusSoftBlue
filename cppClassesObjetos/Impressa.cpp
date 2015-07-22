#include "Impressa.h"
#include <iostream>
#include <string>

using namespace std;

Impressa::Impressa()
{
}

Impressa::Impressa(unsigned int codigo, string titulo, string editora, unsigned int paginas) : Midia(codigo, titulo)
{
	this->setEditora(editora);
	this->setPaginas(paginas);
}

Impressa::~Impressa()
{
}

void Impressa::setEditora(string editora)
{
	this->editora = editora;
}

string Impressa::getEditora()
{
	return this->editora;
}

void Impressa::setPaginas(unsigned int paginas)
{
	this->paginas = paginas;
}

unsigned int Impressa::getPaginas()
{
	return this->paginas;
}

