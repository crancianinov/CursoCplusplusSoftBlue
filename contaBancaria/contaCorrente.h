#pragma once
#include "contaBancaria.h"
class contaCorrente : public contaBancaria
{
public:
	contaCorrente();
	void calcularSaldo();
	~contaCorrente();
};

