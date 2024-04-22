#include <iostream>

int main()
{
	setlocale(0, "portuguese");
	double number[10]{ 0 }, result{ 0 }, soma{ 0 };
	

	for (int i = 0; i <= 9; i++)
	{
		std::cout << "Insira o número " << (i + 1) << " da soma: ";
		std::cin >> number[i];

		soma += number[i];

		system("cls");
	}

	result = soma;

	std::cout << "O resultado das somas dos dez números é: " << result << std::endl;

	system("pause");

	return 0;
}