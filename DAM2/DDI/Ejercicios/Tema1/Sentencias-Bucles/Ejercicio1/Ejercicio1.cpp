//1. Pide dos n�meros por teclado y mu�strelos en pantalla

#include <string>
#include <iostream>

using namespace std;

int n1, n2;

int main()
{
	//Introducimos los n�meros por teclado

	cout << "Escribe el primer numero\n";
	cin >> n1;

	cout << "Escribe el segundo numero\n";
	cin >> n2;

	//Sacamos los n�meros por pantalla

	cout << "El primer n�mero es: " << n1 << endl;
	cout << "El segundo n�mero es: " << n2 << endl;

	system("pause");
	return 0;
}