#include <iostream>
#include <tchar.h>

int main()
{
	setlocale(LC_ALL,"portuguese");

	float Numb1;
	float Numb2;
	float result;
	char ope;

	std::cout << "Digite o primeiro número: ";
	std::cin >> Numb1;
	std::cout << "\n";

	std::cout << "Digite o segundo número: ";
	std::cin >> Numb2;
	std::cout << "\n";

	std::cout << "Escolha a operação matemática que será feita ('+', '-', '*' ou '/'): ";
	std::cin >> ope;
	std::cout << "\n";

	switch (ope)
	{
	case '+':
		result = Numb1 + Numb2;
		break;
	case '-':
		result = Numb1 - Numb2;
		break;
	case '*':
		result = Numb1 * Numb2;
		break;
	case '/':
		result = Numb1 / Numb2;
		break;
	default:
		std::cout << "Operação inválida!" << "\n";
		return 1;
	}

	std::cout << "O resultado da operação é: " << result << "\n";

	system("pause");

	return 0;
}