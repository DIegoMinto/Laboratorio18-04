//Minto Arze Javier DIego
//Ingenieria de Sistemas
#include <iostream>
using namespace std;
int facto, resultado;
int main()
{
	cout << "introducir numero para calcular factorial:" << endl;
	cin >> facto;
	int numero1 = 1;
	int numero2 = 1;
	for (int i = 0; i < facto; i++)
	{
		resultado = numero1 * numero2;
		numero2 = numero2 + 1;
		numero1 = resultado;
	}
	cout << "el factorial es:" << resultado << endl;
	return 0;
}
