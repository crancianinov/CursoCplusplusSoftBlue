#pragma once
#include "Digital.h"
#include <string>
using namespace std;

class Dvd : public Digital
{
public:

	Dvd();
	Dvd(unsigned int codigo, string titulo, unsigned int discos, unsigned int duracao, unsigned int regiao, string legendas);
	~Dvd();

	void setRegiao(unsigned int regiao);
	unsigned int getRegiao();

	void setLegendas(string legendas);
	string getLegendas();

	void showInfo();

private:

	unsigned int regiao;
	string legendas;
};

