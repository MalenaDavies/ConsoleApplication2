
#include <iostream>
using namespace std;

int main()
{
	int N;
	double  suma=0;
	cout << "Ingrese la cantidad de numeros que quiere sumar.";
	cin >> N;

	for (int i = 1; i <= N; i++) {
		suma += i * i;
	}
	cout<<"la ssuma de los cuadrados de 1 a " << N << " es: " << suma;
	return 0;
}