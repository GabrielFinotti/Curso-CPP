#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int number{ 102 };
	int* ptr{ &number };

	std::cout << "Valor da variável Number: " << number << "\n";
	std::cout << "Valor da variável ponteiro: " << ptr << "\n";
	std::cout << "Valor do endereço de memória de Number: " << &number << "\n";
	std::cout << "Valor do endereço de memória do ponteiro: " << &ptr << "\n";
	std::cout << "Valor da variável cujo o endereço de memória está guardada no ponteiro: " << *ptr << std::endl;

	system("pause");

	return 0;
}