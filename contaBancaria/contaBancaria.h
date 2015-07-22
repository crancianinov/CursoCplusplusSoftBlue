#pragma once
class contaBancaria
{
public:
	contaBancaria();
	~contaBancaria();
	void depositar(double valor);
	void sacar(double valor);
	void transferir(double valor, contaBancaria *destino);
	virtual void calcularSaldo() = 0;

protected:
	double saldo;
};

