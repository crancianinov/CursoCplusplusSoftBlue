#include "Relogio.h"


Relogio::Relogio()
{
}

Relogio::Relogio(unsigned int hora, unsigned int minuto, unsigned int segundo)
{
	this->setHora(hora);
	this->setMinuto(minuto);
	this->setSegundo(segundo);
}

Relogio::~Relogio()
{
}

void Relogio::setHora(unsigned int hora)
{
	this->hora = hora;
}
unsigned int Relogio::getHora()
{
	return this->hora;
}

void Relogio::setMinuto(unsigned int minuto)
{
	this->minuto = minuto;
}
unsigned int Relogio::getMinuto()
{
	return this->minuto;
}

void Relogio::setSegundo(unsigned int segundo)
{
	this->segundo = segundo;
}
unsigned int Relogio::getSegundo()
{
	return this->segundo;
}