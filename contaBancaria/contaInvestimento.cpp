#include "contaInvestimento.h"
#include <iostream>
using namespace std;

contaInvestimento::contaInvestimento()
{
}
void contaInvestimento::calcularSaldo()
{
	double saldoLiquido = saldo - (saldo / 100 * 5);
	cout << "Saldo liquido da conta investimento: " << saldoLiquido << endl;
}

contaInvestimento::~contaInvestimento()
{
}
