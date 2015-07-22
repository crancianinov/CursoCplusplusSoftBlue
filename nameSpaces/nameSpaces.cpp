#include <iostream>
using namespace std;

#include "sistemati\Usuario.h"
using namespace sistemati;
namespace n1 = sistemati;

#include "sistemarh\Usuario.h"
using namespace sistemarh;
namespace n2 = sistemarh;

#include "linguagens.h"
using namespace sistemati::linguagens;

int main()
{
	cout << "\nNamespaces\n" << endl;

	//Include do arquivo, sem USING
/*
	sistemarh::Usuario *usuarioRH = new sistemarh::Usuario();
	usuarioRH->idade = 30;
	usuarioRH->horasTrabalhadas = 12000;
	cout << "Idade: " << usuarioRH->idade << endl;
	cout << "Horas trabalhadas: " << usuarioRH->horasTrabalhadas << endl;
*/
	// Com INCLUDE e USING

	/*Usuario *usuarioRH = new Usuario();
	usuarioRH->idade = 30;
	usuarioRH->horasTrabalhadas = 12000;
	cout << "Idade: " << usuarioRH->idade << endl;
	cout << "Horas trabalhadas: " << usuarioRH->horasTrabalhadas << endl;*/

	//Com 2 includes e 2 using
	/*
	sistemarh::Usuario *usuarioRH = new sistemarh::Usuario();
	usuarioRH->idade = 30;
	usuarioRH->horasTrabalhadas = 12000;
	cout << "Idade: " << usuarioRH->idade << endl;
	cout << "Horas trabalhadas: " << usuarioRH->horasTrabalhadas << endl;

	sistemati::Usuario *usuarioTI = new sistemati::Usuario();
	strcpy_s(usuarioTI->nome, "Andre");
	strcpy_s(usuarioTI->linguagemDominante, "C, C++");
	cout << "Nome: " << usuarioTI->nome << endl;
	cout << "Linguagem Dominante: " << usuarioTI->linguagemDominante << endl;
	*/

	// Com ALIAS de namespaces

	/*n2::Usuario *usuarioRH = new n2::Usuario();
	usuarioRH->idade = 30;
	usuarioRH->horasTrabalhadas = 12000;
	cout << "Idade: " << usuarioRH->idade << endl;
	cout << "Horas trabalhadas: " << usuarioRH->horasTrabalhadas << endl;

	n1::Usuario *usuarioTI = new n1::Usuario();
	strcpy_s(usuarioTI->nome, "Andre");
	strcpy_s(usuarioTI->linguagemDominante, "C, C++");
	cout << "Nome: " << usuarioTI->nome << endl;
	cout << "Linguagem Dominante: " << usuarioTI->linguagemDominante << endl;*/

	// Dois niveis de namespaces
	/*Php *ling1 = new Php();
	strcpy_s(ling1->nomeDoServidor, "Apache");
	cout << "Nome do servidor: " << ling1->nomeDoServidor << endl;

	C *ling2 = new C();
	strcpy_s(ling2->plataforma, "Windows");
	cout << "Plataforma: " << ling2->plataforma << endl;*/

	// STD: String
	string nome("Ronaldo Crancianinov");
	cout << "Nome: " << nome.data() << endl;

	string primeiroNome(nome, 0, 7);
	cout << "Primeiro nome: " << primeiroNome.data() << endl;

	string ultimoNome(nome, 8, 12);
	cout << "Ultimo nome: " << ultimoNome.data() << endl;

	string ultimoNomeV2(nome, 8);
	cout << "Ultimo nome (V2): " << ultimoNomeV2.data() << endl;

	string nomeCompleto("Ronaldo ");
	nomeCompleto.append("Crancianinov");
	cout << "Nome completo: " << nomeCompleto.data() << endl;

	cout << "Tamanho: " << nome.length() << endl;

	cout << "Substring: " << nome.substr(0, 7).data() << endl;

	for (int i = 0; i < nome.length(); i++)
	{
		cout << "Posicao[" << i << "] = " << nome.at(i) << endl;
	}


	if (nome.compare("Ronaldo Crancianinov") == 0)
	{
		cout << "Primeira comparacao: iguais" << endl;
	}
	else
	{
		cout << "Primeira comparacao: diferentes" << endl;
	}

	if (nome.compare("Andre") == 0)
	{
		cout << "Segunda comparacao: iguais" << endl;
	}
	else
	{
		cout << "Segunda comparacao: diferentes" << endl;
	}

	std::size_t encontrou = nome.find("a");

	if (encontrou != std::string::npos)
	{
		cout << "Primeira ocorrencia em: " << encontrou << endl;
	}

	encontrou = nome.find("a", encontrou + 1);

	if (encontrou != std::string::npos)
	{
		cout << "Segunda ocorrencia em: " << encontrou << endl;
	}

	cout << endl;
	return 0;
}