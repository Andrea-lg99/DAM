//2. Pedir cadena de texto y mostrarla

#include <string>
#include <iostream>

using namespace std;

string s;

int main()
{
	//Introducimos los n�meros por teclado

	cout << "Escribe la cadena de texto\n";
	getline(cin, s, '\n');

	//Sacamos los n�meros por pantalla

	cout << "La cadena es: " << s << endl;

	system("pause");
	return 0;
}