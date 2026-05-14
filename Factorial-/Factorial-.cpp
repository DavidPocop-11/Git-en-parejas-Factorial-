#include <iostream>

#include<iostream>
using namespace std;
int factorial(int num);
int numero;

void main() {
	int numero;
	cout << "Numero para calcular factorial";
	cin >> numero;
	cout << "El factoriales" << factorial(numero);
}
int factorial(int num) {
	if (num <= 1) { return 1; }
	else {
		return num * factorial(num - 1);
	}


}