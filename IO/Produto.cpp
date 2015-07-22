#include "Produto.h"

Produto::Produto(int codigo, const char* descricao)
{
	this->codigo = codigo;
	strcpy_s(this->descricao, descricao);
}