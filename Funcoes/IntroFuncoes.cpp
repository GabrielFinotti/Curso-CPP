#include <iostream>

int somarUmNumero(int Numb1, int Numb2)
{
	int somarNumero;
	somarNumero = Numb1 + Numb2;

	return somarNumero;
}

int main()
{
	setlocale(0, "portuguese");

	int Numb1, Numb2;

	std::cout << "Insira o primeiro n�mero: ";
	std::cin >> Numb1;
	std::cout << "\n";

	std::cout << "Insira o segundo n�mero: ";
	std::cin >> Numb2;
	std::cout << "\n";

	std::cout << "Valor da soma � : " << somarUmNumero(Numb1, Numb2) << std::endl;

	system("pause");

	return 0;
}