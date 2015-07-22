#pragma once
#include <iostream>
using namespace std;

class Produto
{
public:
	Produto(int codigo, const char* descricao);
	int codigo;
	char descricao[30];

private:
};