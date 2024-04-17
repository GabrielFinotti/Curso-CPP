#include <iostream>
#include <tchar.h>
#include <iomanip>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int number = 10;
	float number2 = 45.256f;
	double number3 = 453.234567;
	char caracter = 'a';

	std::cout << "Valor da Variavel: " << number << "\n";
	std::cout << "Tamanho da Variavel: " << sizeof(number) << " Bytes\n";
	std::cout << "Localização da variável: " << &number << " Bytes\n";

	std::cout << "Valor da Variavel: " << number2 << "\n";
	std::cout << "Tamanho da Variavel: "<< std::setprecision(10) << sizeof(number2) << " Bytes\n";
	std::cout << "Localização da variável: " << &number2 << " Bytes\n";

	std::cout << "Valor da Variavel: " << number3 << "\n";
	std::cout << "Tamanho da Variavel: " << sizeof(number3) << " Bytes\n";
	std::cout << "Localização da variável: " << &number3 << " Bytes\n";

	std::cout << "Valor da Variável: " << caracter << "\n";
	std::cout << "Tamanho da Variável: " << sizeof(caracter) << " Bytes\n";
	std::cout << "Localização da variável: " << (void *) & number2 << " Bytes\n";
}