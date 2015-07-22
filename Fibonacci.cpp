//Fibonacci
//
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	int nMax(0);
	int i(0);
	int a(1);

	cout << endl << "Valor Maximo: " << endl;
	cin >> nMax;

	while (i < nMax)
	{
		cout << endl << i << endl;
		i = i + a;
		a = i - a;
	}

	return 0;
}
