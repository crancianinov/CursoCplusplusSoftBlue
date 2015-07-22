//cppClassesObjetos
#include <iostream>
using namespace std;

#include "SistemaLocadora.h"

int main()
{
	//cout << "\nClasses e Objetos." << endl;
	//cout << "\nEncapsulamento e modificadores de acesso.\n" << endl;
	//cout << "\nHeranca e Polimorfismo: Aula pratica." << endl;
	cout << "\n\nExercicio Namaspace.";
	//Exemplo de Livro 1
	/*Livro *meuLivro;
	meuLivro = new Livro();

	meuLivro->codigo = 1;
	strcpy_s(meuLivro->titulo, "A vida do meu pau.");

	cout << "(meuLivro) Codigo: " << meuLivro->getCodigo() << endl;
	cout << "(meuLivro) Titulo: " << meuLivro->getTitulo() << endl;

	delete meuLivro;*/

	//Variaveis
	/*unsigned int codigo;
	string titulo;
	string editora;
	unsigned int paginas;
	string isbn;
	unsigned int ano;
	unsigned int mes;
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
	unsigned int regiao;
	string legendas;*/


	//Exemplo de livro 2
	/*codigo = 2;
	strcpy_s(titulo, "A vida do meu pau 2");
	strcpy_s(editora, "Softblue");
	paginas = 425;
	strcpy_s(isbn, "958-25-6547-568-5");

	Livro *livroAndre;
	livroAndre = new Livro(codigo, titulo, editora, paginas, isbn);
	livroAndre->showInfo();*/

	//Exemplo de Revista 1
	/*codigo = 3;
	strcpy_s(titulo, "VideoGames");
	strcpy_s(editora, "Gamers");
	paginas = 35;
	ano = 2014;
	mes = 04;

	Revista *revistaGame;
	revistaGame = new Revista(codigo, titulo, editora, paginas, ano, mes);
	revistaGame->showInfo();*/

	//Exemplo CD
	/*codigo = 4;
	strcpy_s(titulo, "Nocturnal");
	discos = 6;
	duracao = 34;
	faixas = 10;

	Cd *cd;
	cd = new Cd(codigo, titulo, discos, duracao, faixas);
	cd->showInfo();*/

	//Exemplo DVD
	/*codigo = 5;
	strcpy_s(titulo, "Live at Brixton");
	discos = 4;
	duracao = 170;
	regiao = 1;
	strcpy_s(legendas, "Portugues");

	Dvd *dvd;
	dvd = new Dvd(codigo, titulo, discos, duracao, regiao, legendas);
	dvd->showInfo();*/

	//Comando For

	/*Midia *variasMidias[4];
	variasMidias[0] = livroAndre;
	variasMidias[1] = revistaGame;
	variasMidias[2] = cd;
	variasMidias[3] = dvd;

	cout << "\n\nComando for:";

	for (int i = 0; i < 4; i++)
	{
		variasMidias[i]->showInfo();
	}

	cout << "\n\nObjetos criados: " << Midia::getInstancias();*/

	// Encerrando o app

	/*delete livroAndre;
	delete revistaGame;
	delete cd;
	delete dvd;*/

	SistemaLocadora *s1 = new SistemaLocadora();
	s1->iniciar();

	cout << endl;
	return 0;
}