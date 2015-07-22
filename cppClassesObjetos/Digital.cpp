#include "Digital.h"
#include <iostream>
#include <string>

using namespace std;

Digital::Digital()
{
}

Digital::Digital(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao) : Midia(codigo, titulo)
{
	this->setDiscos(discos);
	this->setDuracao(duracao);
}


Digital::~Digital()
{
}

void Digital::setDiscos(unsigned int discos)
{
	this->discos = discos;
}
unsigned int Digital::getDiscos()
{
	return this->discos;
}

void Digital::setDuracao(unsigned int duracao)
{
	this->duracao = duracao;
}
unsigned int Digital::getDuracao()
{
	return this->duracao;
}
