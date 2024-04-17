#include <iostream>

bool isPar(int Numb);

int main()
{
	setlocale(0, "portuguese");

	float Numb;

	std::cout << "Insira um número para verificação: ";
	std::cin >> Numb;
	std::cout << "\nNúmero inserido foi: " << Numb << "\n";

	if (isPar(Numb))
	{
		std::cout << "O número selecionado é par!" << std::endl;
	}
	else
	{
		std::cout << "O número selecionado é ímpar!" << std::endl;
	}

	return 0;
}

bool isPar(int Numb)
{
	int verify = Numb % 2;

	if (verify == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}