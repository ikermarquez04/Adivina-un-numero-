#include<iostream>
#include<stdlib.h>


using namespace std;
int main()
{
	int numero, dato, contador = 0;

	srand(time(NULL));
	dato = 1 + rand() % (100);

	do
	{
		cout << "Digita un numero: "; cin >> numero;

		if (numero > dato)
		{
			cout << "digita un numero menor\n";
		}

		if (numero < dato)
		{
			cout << "digita un numero mayor\n";
		}
		contador++;
	} while (numero != dato);

	cout << "\nWUUUU, ADIVINASTE EL NUMERO :D\n";
	cout << "numero de intentos: " << contador << endl;

	system("pause");
	return 0;
}