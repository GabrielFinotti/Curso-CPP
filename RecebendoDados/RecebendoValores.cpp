#include <iostream>
#include <tchar.h>

int main()
{
	setlocale(LC_ALL,"portuguese");

	float Numb1;
	float Numb2;
	float result;
	char ope;

	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> Numb1;
	std::cout << "\n";

	std::cout << "Digite o segundo n�mero: ";
	std::cin >> Numb2;
	std::cout << "\n";

	std::cout << "Escolha a opera��o matem�tica que ser� feita ('+', '-', '*' ou '/'): ";
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
		std::cout << "Opera��o inv�lida!" << "\n";
		return 1;
	}

	std::cout << "O resultado da opera��o �: " << result << "\n";

	system("pause");

	return 0;
}