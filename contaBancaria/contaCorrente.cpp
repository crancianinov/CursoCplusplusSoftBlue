#include "contaCorrente.h"
#include <iostream>
using namespace std;

contaCorrente::contaCorrente()
{
}
void contaCorrente::calcularSaldo()
{
	double saldoLiquido = saldo - (saldo / 100 * 10);
	cout << "Saldo liquido da conta corrente: " << saldoLiquido << endl;
}

contaCorrente::~contaCorrente()
{
}
