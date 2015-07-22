#include <iostream>
using namespace std;

#include <vector>
#include <stack>
#include <queue>

class Marca
{
public:
	string titulo;
};

int meuComparador(const void *a, const void *b)
{
	//S

	for (int i = 0; i < (*(Marca*)a).titulo.length(); i++)
	{
		if ((*(Marca*)b).titulo.length() < i)
		{
			return 1;
		}

		if ((*(Marca*)a).titulo.at(i) < (*(Marca*)b).titulo.at(i))
		{
			return -1;
		}

		else if ((*(Marca*)a).titulo.at(i) > (*(Marca*)b).titulo.at(i))
		{
			return 1;
		}
		else
		{
			
		}
	}

	if ((*(Marca*)b).titulo.length() > (*(Marca*)a).titulo.length())
	{
		return 1;
	}

	return 0;
}

int main()
{
	cout << "\nNamespace Standard\n" << endl;

	//Vector

	/*vector<int> meuVector(5);
	vector<int>::iterator controladorVector;

	controladorVector = meuVector.begin();

	controladorVector = meuVector.insert(controladorVector, 10);

	controladorVector = meuVector.insert(controladorVector, 2, 15);

	vector<int> outroVector(2, 30);

	controladorVector = meuVector.insert(controladorVector, outroVector.begin(), outroVector.end());

	controladorVector = meuVector.insert(controladorVector + 3, 10);

	controladorVector = meuVector.begin();

	int meuArray[] = { 90, 91, 92, 93 };
	meuVector.insert(controladorVector, meuArray, meuArray + 4);




	cout << "Valores de meuVector: ";
	for (controladorVector = meuVector.begin(); controladorVector < meuVector.end(); controladorVector++)
	{
		cout << " " << *controladorVector;
	}
	cout << endl;

	meuVector.clear();

	for (int i = 0; i < meuVector.size(); i++)
	{
		cout << "Posicao [" << i << "] " << meuVector.at(i) << endl;
	}*/

	//Stack
	
	//stack<int> minhaPilha;
	//int tempElemento;

	//minhaPilha.push(3);
	//minhaPilha.push(4);
	//minhaPilha.push(5);
	//minhaPilha.push(6);
	//minhaPilha.push(7);

	//cout << "Tamanho da pilha: " << minhaPilha.size() << endl;

	///*tempElemento = minhaPilha.top();
	//cout << "Retirado da pilha para ser atendido: " << tempElemento << endl;
	//minhaPilha.pop();

	//tempElemento = minhaPilha.top();
	//cout << "Retirado da pilha para ser atendido: " << tempElemento << endl;
	//minhaPilha.pop();*/

	//while (minhaPilha.size() > 0)
	//{
	//	tempElemento = minhaPilha.top();
	//	cout << "Retirado da pilha para ser atendido: " << tempElemento << endl;
	//	minhaPilha.pop();
	//}

	//// Queue
	//queue<int> minhaFila;

	//minhaFila.push(3);
	//minhaFila.push(4);
	//minhaFila.push(5);
	//minhaFila.push(6);
	//minhaFila.push(7);

	//cout << "\n\nTamanho da fila: " << minhaFila.size() << endl;

	///*tempElemento = minhaFila.front();
	//cout << "Retirado da fila para ser atendido: " << tempElemento << endl;
	//minhaFila.pop();

	//tempElemento = minhaFila.front();
	//cout << "Retirado da fila para ser atendido: " << tempElemento << endl;
	//minhaFila.pop();*/

	//while (minhaFila.size() > 0)
	//{
	//	tempElemento = minhaFila.front();
	//	cout << "Retirado da fila para ser atendido: " << tempElemento << endl;
	//	minhaFila.pop();
	//}

	// qsort

	Marca *m1 = new Marca();
	string strSoftBlue("SoftBlue");
	m1->titulo = strSoftBlue;

	Marca *m2 = new Marca();
	string strFerrari("Ferrari");
	m2->titulo = strFerrari;

	Marca *m3 = new Marca();
	string strStarbucks("Starbucks");
	m3->titulo = strStarbucks;

	Marca *m4 = new Marca();
	string strGoogle("Google");
	m4->titulo = strGoogle;

	Marca *marcas = new Marca[4];
	marcas[0] = *m1;
	marcas[1] = *m2;
	marcas[2] = *m3;
	marcas[3] = *m4;

	for (int i = 0; i < 4; i++)
	{
		cout << marcas[i].titulo.data() << ", ";
	}
	cout << endl;

	qsort(marcas, 4, sizeof(Marca), meuComparador);

	for (int i = 0; i < 4; i++)
	{
		cout << marcas[i].titulo.data() << ", ";
	}
	cout << endl;

	// Busca (bsearch)

	Marca *busca;

	busca = (Marca*) bsearch(m2, marcas, 4, sizeof(Marca), meuComparador);

	if (busca != NULL)
	{
		cout << "Encontrado: " << busca->titulo.data() << endl;
	}
	else
	{
		cout << "Nao encontrado" << endl;
	}

	cout << endl;
	return 0;
}