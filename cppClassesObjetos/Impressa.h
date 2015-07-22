#pragma once
#include "Midia.h"
#include <string>
using namespace std;

class Impressa:public Midia
{
public:
	Impressa();
	Impressa(unsigned int codigo, string titulo, string editora, unsigned int paginas);
	~Impressa();

	void setEditora(string editora);
	string getEditora();

	void setPaginas(unsigned int paginas);
	unsigned int getPaginas();

	virtual void showInfo() = 0;

private:
	string editora;
	unsigned int paginas;
};

