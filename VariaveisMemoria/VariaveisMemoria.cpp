#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int number = 10;
	double salario = 4567.90;

	std::cout << "Tamanho da vari�vel N�mero: " << sizeof(number) << " Bytes\n";
	std::cout << "Endere�o de mem�ria da vari�vel N�mero: " << &number << "\n";

	std::cout << "Tamanho da vari�vel Sal�rio: " << sizeof(salario) << " Bytes\n";
	std::cout << "Endere�o de mem�ria da vari�vel Sal�rio: " << &salario << std::endl;

	system("pause");

	return 0;
}