#include <iostream>

void TrocaNumeros(int&, int&);

int main()
{
	setlocale(0, "portuguese");
	int number1, number2;

	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> number1;

	std::cout << "Digite o segundo n�mero: ";
	std::cin >> number2;

	TrocaNumeros(number1, number2);

	std::cout << "Valores depois da troca do n�mero1 " << number1 << " e do n�mero 2 " << number2 << std::endl;

	system("pause");

	return 0;
}

void TrocaNumeros(int &number1, int &number2)
{
	int temp{ number1 };
	number1 = number2;
	number2 = temp;
}