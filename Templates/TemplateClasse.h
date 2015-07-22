#pragma once
#include <iostream>
#include <fstream>

using namespace std;

template <class T> class TemplateClasse
{
public:
	TemplateClasse();
	void salvarObjeto(T *objeto, const char *localizacao);
	T* lerObjeto(const char *localizacao);



};

template <class T> TemplateClasse<T>::TemplateClasse()
{
	cout << "Objeto TemplateClasse criado com sucesso: " << endl;
}

template <class T> void TemplateClasse<T>::salvarObjeto(T *objeto, const char *localizacao)
{
	ofstream objectWriter;
	objectWriter.open(localizacao, ios::binary);
	objectWriter.write((char *)&objeto, sizeof(objeto));
	objectWriter.close();
}

template <class T> T* TemplateClasse<T>::lerObjeto(const char *localizacao)
{
	T *objeto;
	ifstream objectReader;
	objectReader.open(localizacao, ios::binary);
	objectReader.read((char *)&objeto, sizeof(objeto));
	objectReader.close();

	return objeto;

}