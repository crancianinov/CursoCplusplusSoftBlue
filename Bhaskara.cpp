//Leitura de a, b e c, calculo das raizes.
#include <iostream>
#include <cmath>

double Xpos();
double Xneg();

using std::cout;
using std::cin;
using std::endl;

float a, b, c;

int main()
{
	cout << endl << "Entre com os valores para a, b e c, respectivamente" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << endl << "X1 = " << Xpos();
	cout << endl << "X2 = " << Xneg();
	cout << endl;
	return 0;
}

double Xpos()
{
	double x1;
	x1 = (-b + (sqrt((b*b) - (4 * a*c)))) / (2 * a);
	return x1;
}

double Xneg()
{
	double x2;
	x2 = (-b - (sqrt((b*b) - (4 * a*c)))) / (2 * a);
	return x2;
}