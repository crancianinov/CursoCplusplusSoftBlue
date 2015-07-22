#pragma once
#include <iostream>
using namespace std;

template <class T1, class T2> class TemplateComposto
{
private:
	T1 variavel1;
	T2 variavel2;

public:
	TemplateComposto();
	void capturarDados();
	void exibirDados();

};

template <class T1, class T2> TemplateComposto<T1, T2>::TemplateComposto()
{
	cout << "Objeto TemplateComposto criado com sucesso" << endl;
}

template <class T1, class T2> void TemplateComposto<T1, T2>::capturarDados()
{
	cout << "Digite o primeiro valor: ";
	cin >> this->variavel1;

	cout << "Digite o segundo valor: ";
	cin >> this->variavel2;
}

template <class T1, class T2> void TemplateComposto<T1, T2>::exibirDados()
{
	cout << "A divisao dos valores resulta em: " << this->variavel1 / this->variavel2 << endl;
}