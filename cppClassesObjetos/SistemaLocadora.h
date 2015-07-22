#pragma once

#include "Livro.h"
#include "Revista.h"
#include "Cd.h"
#include "Dvd.h"

#include <vector>
using namespace std;

class SistemaLocadora
{
public:
	SistemaLocadora();
	
	void iniciar();
		void cadastrarMidias();
			void cadastrarCd();
			void cadastrarDvd();
			void cadastrarRevista();
			void cadastrarLivro();
		void visualizarMidias();
			void visualizarCds();
			void visualizarDvds();
			void visualizarRevistas();
			void visualizarLivros();

	void arquivoSalvar();
	void arquivoLer();

private:
	vector<Cd> cds;
	vector<Dvd> dvds;
	vector<Livro> livros;
	vector<Revista> revistas;
	string filenameCds = "arquivosDeCds.dat";
	string filenameDvds = "arquivosDeDvds.dat";
	string filenameRevistas = "arquivosDeRevistas.dat";
	string filenameLivros = "arquivosDeLivros.dat";

};

