//Templates
#include <iostream>
#include "TemplateSimples.h"
#include "TemplateComposto.h"
#include "DesenhoAnimado.h"
#include "TemplateClasse.h"
using namespace std;

int main()
{
	cout << "\nTemplates\n" << endl;

	// Utilizando TemplateSimples (estrutura) 

	TemplateSimples<char> tsc;
	TemplateSimples<int> tsi;
	TemplateSimples<double> tsd;

	/*tsc.capturarDado();
	tsc.exibirDado();

	tsi.capturarDado();
	tsi.exibirDado();

	tsd.capturarDado();
	tsd.exibirDado();*/

	// Utilizando TemplateSimples (objeto)

	TemplateSimples<char> *tscObj;
	TemplateSimples<int> *tsiObj;
	TemplateSimples<double> *tsdObj;

	/*tscObj = new TemplateSimples<char>();
	tscObj->capturarDado();
	tscObj->exibirDado();

	tsiObj = new TemplateSimples<int>();
	tsiObj->capturarDado();
	tsiObj->exibirDado();

	tsdObj = new TemplateSimples<double>();
	tsdObj->capturarDado();
	tsdObj->exibirDado();*/

	// Template Composto

	TemplateComposto<double, double> *tc1;
	tc1 = new TemplateComposto<double, double>();
	/*tc1->capturarDados();
	tc1->exibirDados();*/

	// Template com classes

	DesenhoAnimado *da1 = new DesenhoAnimado(1980, "Pernalonga");
	DesenhoAnimado *da2 = new DesenhoAnimado(1982, "Pica-Pau");
	DesenhoAnimado *da3 = new DesenhoAnimado(1984, "Tom & Jerry");

	cout << "Desenho: " << da1->nome << " (" << da1->ano << ")" << endl;
	cout << "Desenho: " << da2->nome << " (" << da2->ano << ")" << endl;
	cout << "Desenho: " << da3->nome << " (" << da3->ano << ")" << endl;

	TemplateClasse<DesenhoAnimado> tclasse;
	tclasse.salvarObjeto(da1, "obj1.dat");
	tclasse.salvarObjeto(da2, "obj2.dat");
	tclasse.salvarObjeto(da3, "obj3.dat");

	DesenhoAnimado *daLidoA;
	DesenhoAnimado *daLidoB;
	DesenhoAnimado *daLidoC;

	daLidoA = tclasse.lerObjeto("obj1.dat");
	daLidoB = tclasse.lerObjeto("obj2.dat");
	daLidoC = tclasse.lerObjeto("obj3.dat");

	cout << "Desenho: " << daLidoA->nome << " (" << daLidoA->ano << ")" << endl;
	cout << "Desenho: " << daLidoB->nome << " (" << daLidoB->ano << ")" << endl;
	cout << "Desenho: " << daLidoC->nome << " (" << daLidoC->ano << ")" << endl;

	cout << endl;
	return 0;
}