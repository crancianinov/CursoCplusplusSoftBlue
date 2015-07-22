#pragma once
#include "Midia.h"
#include <string>
using namespace std;

class Digital :public Midia
{
public:
	Digital();
	Digital(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao);
	~Digital();

	void setDiscos(unsigned int discos);
	unsigned int getDiscos();

	void setDuracao(unsigned int duracao);
	unsigned int getDuracao();

	virtual void showInfo() = 0;

private:
	unsigned int discos;
	unsigned int duracao;
};

