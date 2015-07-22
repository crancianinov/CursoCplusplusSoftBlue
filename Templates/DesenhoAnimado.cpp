#include "DesenhoAnimado.h"
#include <string>


DesenhoAnimado::DesenhoAnimado(int ano, const char *nome)
{
	this->ano = ano;
	strcpy_s(this->nome, nome);
}


