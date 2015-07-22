#pragma once
#include "Digital.h"
#include <string>
using namespace std;

class Cd : public Digital
{
public:

	Cd();
	Cd(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao, unsigned int faixas);
	~Cd();


	void setFaixas(unsigned int faixas);
	unsigned int getFaixas();

	void showInfo();

private:

	unsigned int faixas;
};

