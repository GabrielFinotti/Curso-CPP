#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int number{ 234 };
	int* ptrInt{ &number };

	*ptrInt = 1456;

	std::cout << "Valor de Number recuperado pelo ponteiro: " << *ptrInt << "\n";
	std::cout << "Endere�o de mem�ria de Number: " << &number << "\n";
	std::cout << "Endere�o de mem�ria de ptrInt: " << &ptrInt << "\n";

	int* ptrInt2{ ptrInt };

	*ptrInt += 200;

	std::cout << "Valor atualizado do Number referenciado pelo segundo ponteiro cujo recebe o valor de endere�o salvo no primeiro ponteiro: " << *ptrInt2 << std::endl;

	system("pause");

	return 0;
}