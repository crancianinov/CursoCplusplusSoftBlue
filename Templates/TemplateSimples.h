#pragma once
#include <iostream>
using namespace std;

template <class T> class TemplateSimples
{
private:
	T variavel;

public:
	TemplateSimples();
	void capturarDado();
	void exibirDado();

};

template <class T> TemplateSimples<T>::TemplateSimples()
{
	cout << "Objeto TemplateSimples criado com sucesso" << endl;
}

template <class T> void TemplateSimples<T>::capturarDado()
{
	cout << "Digite o valor: ";
	cin >> this->variavel;
}

template <class T> void TemplateSimples<T>::exibirDado()
{
	cout << "Valor: " << this->variavel << endl;
}