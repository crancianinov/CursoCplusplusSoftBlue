#pragma once
#include "Impressa.h"
#include <string>
using namespace std;

class Revista : public Impressa
{
public:

	Revista();
	Revista(unsigned int codigo, string titulo, string editora, unsigned int paginas, unsigned int ano, unsigned int mes);
	~Revista();


	void setAno(unsigned int ano);
	unsigned int getAno();

	void setMes(unsigned int mes);
	unsigned int getMes();

	void showInfo();

private:

	unsigned int ano;
	unsigned int mes;
};

