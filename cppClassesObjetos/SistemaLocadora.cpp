#include "SistemaLocadora.h"
#include <iostream>
#include <fstream>
using namespace std;

SistemaLocadora::SistemaLocadora()
{
	this->arquivoLer();
}

void SistemaLocadora::iniciar()
{

	int opcaoMenu;

	do
	{
		cout << "\n\n\nSistema de Locadora" << endl;
		cout << "\n1) Cadastrar midia;";
		cout << "\n2) Visualizar midias;";
		cout << "\n3) Sair;";
		cout << "\nDigite sua opcao: ";
		cin >> opcaoMenu;

		switch (opcaoMenu)
		{
		case 1: 
			this->cadastrarMidias();
			break;
		case 2:
			this->visualizarMidias();
			break;
		case 3:
			//sair
			this->arquivoSalvar();
			break;
		default:
			cout << "\nOpcao Invalida.";
			break;
		}
	} while (opcaoMenu != 3);
}

void SistemaLocadora::cadastrarMidias()
{
	int opcaoMenu;

	do
	{
		cout << "\n\n\nCADASTRAR MIDIA" << endl;
		cout << "\n1) Cadastrar Cd;";
		cout << "\n2) Cadastrar Dvd;";
		cout << "\n3) Cadastrar Revista;";
		cout << "\n4) Cadastrar Livro;";
		cout << "\n5) Voltar ao menu anterior.";

		cout << "\nDigite sua opcao: ";
		cin >> opcaoMenu;

		switch (opcaoMenu)
		{
		case 1:
			this->cadastrarCd();
			break;
		case 2:
			this->cadastrarDvd();
			break;
		case 3:
			this->cadastrarRevista();
			break;
		case 4:
			this->cadastrarLivro();
			break;
		case 5:
			//sair
			break;
		default:
			cout << "\nOpcao invalida.";
			break;
		}
	} while (opcaoMenu != 5);
}

void SistemaLocadora::visualizarMidias()
{
	int opcaoMenu;

	do
	{
		cout << "\n\n\nVISUALIZAR MIDIA";
		cout << "\n1) Visualizar Cds;";
		cout << "\n2) Visualizar Dvds;";
		cout << "\n3) Visualizar Revistas;";
		cout << "\n4) Visualizar Livros;";
		cout << "\n5) Voltar ao menu anterior.";

		cout << "\nDigite sua opcao: ";
		cin >> opcaoMenu;

		switch (opcaoMenu)
		{
		case 1:
			this->visualizarCds();
			break;
		case 2:
			this->visualizarDvds();
			break;
		case 3:
			this->visualizarRevistas();
			break;
		case 4:
			this->visualizarLivros();
			break;
		case 5:
			//sair
			break;
		default:
			cout << "\nOpcao invalida.";
			break;
		}
	} while (opcaoMenu != 5);
}

void SistemaLocadora::arquivoSalvar()
{
	ofstream fileSave;

	// *** GRAVACAO CDS ************

	if (cds.size() > 0)
	{
		fileSave.open(filenameCds, ios::binary);

		int cdsSize = (int)cds.size();
		fileSave.write((char*)&cdsSize, sizeof(unsigned int));

		Cd *cd = NULL;
		for (int i = 0; i < cds.size(); i++)
		{
			cd = &cds.at(i);

			int codigo = (int)cd->getCodigo();
			fileSave.write((char*)&codigo, sizeof(unsigned int));

			string titulo = cd->getTitulo();
			fileSave.write((char*)titulo.c_str(), 100 * sizeof(char));

			int discos = (int)cd->getDiscos();
			fileSave.write((char*)&discos, sizeof(unsigned int));

			int duracao = (int)cd->getDuracao();
			fileSave.write((char*)&duracao, sizeof(unsigned int));

			int faixas = (int)cd->getFaixas();
			fileSave.write((char*)&faixas, sizeof(unsigned int));
		}
	}

	fileSave.close();

	// *** GRAVACAO DVD ************

	if (dvds.size() > 0)
	{
		fileSave.open(filenameDvds, ios::binary);

		int dvdsSize = (int)dvds.size();
		fileSave.write((char*)&dvdsSize, sizeof(unsigned int));

		Dvd *dvd = NULL;
		for (int i = 0; i < dvds.size(); i++)
		{
			dvd = &dvds.at(i);

			int codigo = (int)dvd->getCodigo();
			fileSave.write((char*)&codigo, sizeof(unsigned int));

			string titulo = dvd->getTitulo();
			fileSave.write((char*)titulo.c_str(), 100 * sizeof(char));

			int discos = (int)dvd->getDiscos();
			fileSave.write((char*)&discos, sizeof(unsigned int));

			int duracao = (int)dvd->getDuracao();
			fileSave.write((char*)&duracao, sizeof(unsigned int));

			int regiao = (int)dvd->getRegiao();
			fileSave.write((char*)&regiao, sizeof(unsigned int));

			string legendas = dvd->getLegendas();
			fileSave.write((char*)legendas.c_str(), 100 * sizeof(char));
		}
	}

	fileSave.close();

	// *** GRAVACAO LIVRO ***********

	if 

}

//Metodos de cadastro

void SistemaLocadora::cadastrarCd()
{
	string entradaUsuarioString;
	int entradaUsuarioInt;

	Cd *cd = new Cd();

	cout << "\nDigite o codigo do Cd: ";
	cin >> entradaUsuarioInt;
	cd->setCodigo(entradaUsuarioInt);

	cout << "\nDigite o titulo do Cd: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	cd->setTitulo(entradaUsuarioString);

	cout << "\nDigite o total de discos do Cd: ";
	cin >> entradaUsuarioInt;
	cd->setDiscos(entradaUsuarioInt);
	
	cout << "\nDigite a duracao do Cd: ";
	cin >> entradaUsuarioInt;
	cd->setDuracao(entradaUsuarioInt);

	cout << "\nDigite o numero de faixas do Cd: ";
	cin >> entradaUsuarioInt;
	cd->setFaixas(entradaUsuarioInt);

	cds.insert(cds.begin(), *cd);
}

void SistemaLocadora::cadastrarDvd()
{
	string entradaUsuarioString;
	int entradaUsuarioInt;

	Dvd *dvd = new Dvd();

	cout << "\nDigite o codigo do Dvd: ";
	cin >> entradaUsuarioInt;
	dvd->setCodigo(entradaUsuarioInt);

	cout << "\nDigite o titulo do Dvd: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	dvd->setTitulo(entradaUsuarioString);

	cout << "\nDigite o total de discos do Dvd: ";
	cin >> entradaUsuarioInt;
	dvd->setDiscos(entradaUsuarioInt);

	cout << "\nDigite a duracao do Dvd: ";
	cin >> entradaUsuarioInt;
	dvd->setDuracao(entradaUsuarioInt);

	cout << "\nDigite a regiao do Dvd: ";
	cin >> entradaUsuarioInt;
	dvd->setRegiao(entradaUsuarioInt);

	cout << "\nDigite as legendas do Dvd: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	dvd->setLegendas(entradaUsuarioString);

	dvds.insert(dvds.begin(), *dvd);
}

void SistemaLocadora::cadastrarRevista()
{
	string entradaUsuarioString;
	int entradaUsuarioInt;

	Revista *revista = new Revista();

	cout << "\nDigite o codigo da Revista: ";
	cin >> entradaUsuarioInt;
	revista->setCodigo(entradaUsuarioInt);

	cout << "\nDigite o titulo da Revista: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	revista->setTitulo(entradaUsuarioString);

	cout << "\nDigite a editora da Revista: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	revista->setEditora(entradaUsuarioString);

	cout << "\nDigite o numero de paginas da Revista: ";
	cin >> entradaUsuarioInt;
	revista->setPaginas(entradaUsuarioInt);

	cout << "\nDigite o ano da Revista: ";
	cin >> entradaUsuarioInt;
	revista->setAno(entradaUsuarioInt);

	cout << "\nDigite o mes da Revista: ";
	cin >> entradaUsuarioInt;
	revista->setMes(entradaUsuarioInt);

	revistas.insert(revistas.begin(), *revista);
}

void SistemaLocadora::cadastrarLivro()
{
	string entradaUsuarioString;
	int entradaUsuarioInt;

	Livro *livro = new Livro();

	cout << "\nDigite o codigo do Livro: ";
	cin >> entradaUsuarioInt;
	livro->setCodigo(entradaUsuarioInt);

	cout << "\nDigite o titulo do Livro: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	livro->setTitulo(entradaUsuarioString);

	cout << "\nDigite a editora do Livro: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	livro->setEditora(entradaUsuarioString);

	cout << "\nDigite o numero de paginas do Livro: ";
	cin >> entradaUsuarioInt;
	livro->setPaginas(entradaUsuarioInt);

	cout << "\nDigite o ISBN: ";
	cin.get();
	getline(cin, entradaUsuarioString);
	livro->setIsbn(entradaUsuarioString);

	livros.insert(livros.begin(), *livro);
}

//metodos de visualizacao

void SistemaLocadora::visualizarCds()
{
	Cd *cd;
	for (int i = 0; i < cds.size(); i++)
	{
		cd = &cds.at(i);
		cd->showInfo();
	}
}

void SistemaLocadora::visualizarDvds()
{
	Dvd *dvd;
	for (int i = 0; i < dvds.size(); i++)
	{
		dvd = &dvds.at(i);
		dvd->showInfo();
	}
}

void SistemaLocadora::visualizarRevistas()
{
	Revista *revista;
	for (int i = 0; i < revistas.size(); i++)
	{
		revista = &revistas.at(i);
		revista->showInfo();
	}
}

void SistemaLocadora::visualizarLivros()
{
	Livro *livro;
	for (int i = 0; i < livros.size(); i++)
	{
		livro = &livros.at(i);
		livro->showInfo();
	}
}