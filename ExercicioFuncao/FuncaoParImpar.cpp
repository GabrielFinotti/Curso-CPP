#include <iostream>

bool isPar(int Numb);

int main()
{
	setlocale(0, "portuguese");

	float Numb;

	std::cout << "Insira um n�mero para verifica��o: ";
	std::cin >> Numb;
	std::cout << "\nN�mero inserido foi: " << Numb << "\n";

	if (isPar(Numb))
	{
		std::cout << "O n�mero selecionado � par!" << std::endl;
	}
	else
	{
		std::cout << "O n�mero selecionado � �mpar!" << std::endl;
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