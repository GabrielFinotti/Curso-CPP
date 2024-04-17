#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int number = 10;
	double salario = 4567.90;

	std::cout << "Tamanho da variável Número: " << sizeof(number) << " Bytes\n";
	std::cout << "Endereço de memória da variável Número: " << &number << "\n";

	std::cout << "Tamanho da variável Salário: " << sizeof(salario) << " Bytes\n";
	std::cout << "Endereço de memória da variável Salário: " << &salario << std::endl;

	system("pause");

	return 0;
}