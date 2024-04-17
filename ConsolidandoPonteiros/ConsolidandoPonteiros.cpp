#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int number{ 102 };
	int* ptr{ &number };

	std::cout << "Valor da vari�vel Number: " << number << "\n";
	std::cout << "Valor da vari�vel ponteiro: " << ptr << "\n";
	std::cout << "Valor do endere�o de mem�ria de Number: " << &number << "\n";
	std::cout << "Valor do endere�o de mem�ria do ponteiro: " << &ptr << "\n";
	std::cout << "Valor da vari�vel cujo o endere�o de mem�ria est� guardada no ponteiro: " << *ptr << std::endl;

	system("pause");

	return 0;
}