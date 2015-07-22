#include "FiguraGeometrica.h"
#include <string>

FiguraGeometrica::FiguraGeometrica(char nome[])
{
	strcpy_s(this->nome, nome);
}


FiguraGeometrica::~FiguraGeometrica()
{
}
