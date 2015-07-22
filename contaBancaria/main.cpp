#include <iostream>
#include "contaCorrente.h"
#include "contaInvestimento.h"
using namespace std;

int main()
{
	cout << "\nResolucao exercicio 1 (Elementos estaticos, interfaces e abstracao)\n\n";

	contaCorrente *cc = new contaCorrente();
	cc->depositar(500);
	cc->sacar(100);
	cc->calcularSaldo();

	contaInvestimento *ci = new contaInvestimento();
	ci->depositar(450);
	ci->sacar(100);
	ci->calcularSaldo();

	cc->transferir(100, ci);
	cc->calcularSaldo();
	ci->calcularSaldo();

	cout << endl;
	return 0;
}