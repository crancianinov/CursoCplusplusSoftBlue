#include "contaBancaria.h"


contaBancaria::contaBancaria()
{
	this->saldo = 0;
}

void contaBancaria::depositar(double valor)
{
	this->saldo += valor;
}

void contaBancaria::sacar(double valor)
{
	this->saldo -= valor;
}

void contaBancaria::transferir(double valor, contaBancaria *destino)
{
	this->sacar(valor);
	destino->depositar(valor);
}

contaBancaria::~contaBancaria()
{
}
