#include <iostream>

int main()
{
	setlocale(0, "portuguese");
	int number{ 1024 };
	char letra{ 'A' };
	int& Ref = number;

	std::cout << "Valor de n�mero usando Ref: " << Ref << "\n";
	std::cout << "Endere�o de mem�ria da Ref: " << &Ref << std::endl;

	system("pause");

	return 0;
}