#pragma once
#include "Exibivel.h"
#include <string>
using namespace std;

class Midia : public Exibivel
{
public:
	Midia();
	Midia(unsigned int codigo, string titulo);
	~Midia();

	void setCodigo(unsigned int codigo);
	unsigned int getCodigo();

	void setTitulo(string titulo);
	string getTitulo();

	virtual void showInfo() = 0;

	static int getInstancias();

private:
	unsigned int codigo;
	string titulo;

	static int instancias;
};