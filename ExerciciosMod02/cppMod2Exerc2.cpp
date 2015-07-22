//Construa uma classe para virtualizar um objeto da vida real Relogio.
//Esta classe devera conter atributos que suportem o armazenamento de informacoes como
//Hora, Minuto e Segundos, um metodo construtor e um metodo que exiba o horario na tela quando invocado.
#include <iostream>
#include "Relogio.h"


using namespace std;

int main()
{
	//Variaveis
	unsigned int hora;
	unsigned int minuto;
	unsigned int segundo;

	cout << "\nExercicio 2 Classes e Objetos\n\n";

	hora = 12;
	minuto = 05;
	segundo = 25;

	Relogio *r;
	r = new Relogio(hora, minuto, segundo);

	cout << "Horario: " << r->getHora();
	cout << ":" << r->getMinuto();
	cout << ":" << r->getSegundo() << endl;

	delete r;

	return 0;
}