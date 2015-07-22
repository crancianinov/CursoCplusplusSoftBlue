//Exceptions
#include <iostream>
#include <string.h>

using namespace std;

// Manual dos erros
const int FILE_READER_FAILED_TO_OPEN = -1;
const int FILE_READER_FAILED_TO_GET_DATA = -2;
const int FILE_READER_FAILED_TO_CLOSE = -3;

//int FileReaderOpen(const char *filename)
//{
//	bool success = true;
//
//	if (success)
//		return 0;
//	else
//		return FILE_READER_FAILED_TO_OPEN;
//}
//
//int FileReaderGetData(char *data)
//{
//	bool success = true;
//
//	if (success)
//	{
//		strcpy_s(data, "54 32 87 12 34");
//		return 0;
//	}
//		
//	else
//		return FILE_READER_FAILED_TO_GET_DATA;
//}
//
//int FileReaderClose()
//{
//	bool success = true;
//
//	if (success)
//		return 0;
//	else
//		return FILE_READER_FAILED_TO_CLOSE;
//}
void EX_FileReaderOpen(const char *filename) throw (int)
{
	bool success = true;

	if (success == false)
		throw(FILE_READER_FAILED_TO_OPEN);
}

void EX_FileReaderGetData(char *data) throw (int)
{
	bool success = true;

	if (success)
	{
		strcpy_s(data, sizeof(data), "58 25 36 56 89 52" );
	}
	else
		throw (FILE_READER_FAILED_TO_GET_DATA);
}

void EX_FileReaderClose() throw (int)
{
	bool success = true;

	if (success == false)
		throw (FILE_READER_FAILED_TO_CLOSE);
}

int main()
{
	cout << "\nExceptions Aula Pratica.\n" << endl;

	char data[30];

	// Realizando as acoes sem nenhum tipo de tratamento
	/*strcpy_s(data, "");

	FileReaderOpen("arquivo.txt");
	FileReaderGetData(data);
	FileReaderClose();

	cout << "Imprimindo dado sem nenhum tratamento: " << data << endl;*/

	// Realizando as acoes com o tratamento convencional
	/*strcpy_s(data, "");
	int errorNumber;

	errorNumber = FileReaderOpen("arquivo.txt");

	if (errorNumber == 0)
	{
		errorNumber = FileReaderGetData(data);
		if (errorNumber == 0)
		{
			errorNumber = FileReaderClose();
			if (errorNumber == 0)
			{
				cout << "Imprimindo dado com tratamento convencional: " << data << endl;
			}
			else
			{
				cout << "Erro: " << errorNumber << endl;
			}
		}
		else
		{
			cout << "Erro: " << errorNumber << endl;
		}
	}
	else
	{
		cout << "Erro: " << errorNumber << endl;
	}*/

	// Tratamento com exceptions

	strcpy_s(data, "");

	try
	{
		EX_FileReaderOpen("arquivo.txt");
		EX_FileReaderGetData(data);
		EX_FileReaderClose();

		cout << "Imprimindo dado com tratamento via exception: " << data << endl;
	}
	catch (int errorEx)
	{
		cout << "Erro (ex): " << errorEx << endl;
	}

	cout << endl;
	return 0;
}