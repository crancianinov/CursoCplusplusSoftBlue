//IO aula pratica
#include <iostream>
#include <fstream>
#include <iomanip>
#include "Produto.h"
#include <string>

using namespace std;

int main()
{
	cout << "\n\n\nIO AULA PRATICA" << endl;

	int i = 15;
	double d = 28.0/3.0;
	float f = 29.0/3.0;

	// sem formatacao

	cout << "Sem formatacao: " << endl;
	cout << i << endl;
	cout << d << endl;
	cout << f << endl;

	// setw

	cout << "setw: " << endl;
	cout << setw(6) << i << endl;
	cout << setw(6) << d << endl;
	cout << setw(6) << f << endl;
	cout << endl;

	// setfill

	cout << "setfill e setw: " << endl;
	cout << setw(6) << setfill('0') << i << endl;
	cout << setw(6) << d << endl;
	cout << setw(6) << setfill('*') << f << endl;
	cout << endl;

	// setprecision

	cout << "set precicion, setfill e setw: " << endl;
	cout << setprecision(5) << setw(10) << i << endl;
	cout << setw(10) << d << endl;
	cout << setw(10) << f << endl;
	cout << setw(10) << 1.1 << endl;
	cout << endl;

	// utilizando fixed 
	cout << "set precicion, setfill e setw: " << endl;
	cout << std::fixed;
	cout << setw(10) << i << endl;
	cout << setw(10) << d << endl;
	cout << setw(10) << f << endl;
	cout << setw(10) << 1.1 << endl;
	cout << setfill('#') << setprecision(5) << setw(10) << 354.364759 << endl;
	cout << endl;

	// setf
	cout.setf(std::ios::left);
	cout << setw(30) << "Forcando a margem esquerda" << endl;

	cout.setf(std::ios::right);
	cout << setw(40) << "Meu texto" << endl;

	// FILE IO: gravando objetos

	Produto *p1 = new Produto(1, "Refrigerante");

	cout << "Produto p1 (pre gravacao): (" << p1->codigo << ") " << p1->descricao << endl;

	ofstream objectWriter;
	objectWriter.open("myobject.dat", ios::binary);
	objectWriter.write((char *)&p1, sizeof(p1));
	objectWriter.close();

	Produto *p2 = NULL;

	ifstream objectReader;
	objectReader.open("myobject.dat", ios::binary);
	objectReader.read((char *)&p2, sizeof(p2));
	objectReader.close();

	cout << "Produto p2 (pos gravacao): (" << p2->codigo << ") " << p2->descricao << endl;

	//File IO: Texto

	ofstream textWriter;
	//textWriter.open("mytext.txt", ios::app);
	textWriter.open("mytext.txt", ios::out);
	
	textWriter << "Exemplo de texto" << endl;
	textWriter << "sendo escrito" << endl;
	textWriter << "em um arquivo." << endl;
	
	textWriter.close();

	string line;

	ifstream textReader;
	textReader.open("mytext.txt", ios::in);

	if (textReader.is_open())
	{
		while (getline(textReader, line))
		{
			cout << line << endl;
		}
		textReader.close();
	}

	// lendo caractere a caractere

	ifstream textReaderCharByChar;
	textReaderCharByChar.open("mytext.txt", ios::in);

	while (!textReaderCharByChar.eof())
	{
		char c = textReaderCharByChar.get();
		cout << "Char: " << c << endl;
	}
	textReaderCharByChar.close();

	// seekp, seekg
	ifstream fileReader;
	fileReader.open("mytext.txt", ios::binary);

	ofstream fileWriter;
	fileWriter.open("mytextCOPY.txt", ios::binary);

	char buffer[3];
	int counter = 0;

	fileReader.seekg(0, fileReader.end);
	int fileLength = fileReader.tellg();
	int bufferLength;

	while (!fileReader.eof())
	{
		fileReader.seekg(counter * sizeof(buffer), ios::beg);
		// 0 * 3 = 0
		// 1 * 3 = 3
		// 2 * 3 = 6...

		fileReader.read((char *)&buffer, sizeof(buffer));

		fileWriter.seekp(counter * sizeof(buffer), ios::beg);
		
		//Tratamento ** ideal ser feito no .read
		if (counter * sizeof(buffer) + 3 > fileLength)
		{
			//... tamanhao do buffer - o que extrapolou
			// 57, 58, 59
			//             3 - 1 = 2
			bufferLength = 3 - ((counter * sizeof(buffer)) + 3 - fileLength);
		}
		else
		{
			bufferLength = sizeof(buffer);
		}
		
		fileWriter.write((char *)&buffer, bufferLength);

		counter++;
	}

	fileReader.close();
	fileWriter.close();


	//prova
	/*ofstream saidaA;
	saidaA.open("datawarehouse.txt", ios::out);
	saidaA << "Exemplo de texto";
	saidaA.close();

	ofstream saidaB;
	saidaB.open("datawarehouse.txt", ios::out);
	saidaB << " escrito no arquivo.";
	saidaB.close();

	string line;
	ifstream entrada;
	entrada.open("datawarehouse.txt", ios::in);

	if (entrada.is_open())
	{
		while (getline(entrada, line))
		{
			cout << line << endl;
		}
		entrada.close();
	}*/
	
	ofstream softblueOut;
	softblueOut.open("sbFile.txt", ios::out);
	softblueOut << "123456789";

	ifstream softblueIn;
	softblueIn.open("sbFile.txt", ios::in);

	while (!softblueIn.eof())
	{
		char c = softblueIn.get();
		cout << c;
	}



	cout << endl;
	return 0;
}