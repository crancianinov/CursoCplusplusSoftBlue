#pragma once
#include "contaBancaria.h"
class contaInvestimento : public contaBancaria
{
public:
	contaInvestimento();
	void calcularSaldo();
	~contaInvestimento();
};

