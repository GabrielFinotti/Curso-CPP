#include <iostream>

void TrocaNumeros(int&, int&);
void TrocaNumeros2(int*, int*);

int main()
{
	setlocale(0, "portuguese");
	int number1, number2;

	std::cout << "Digite o primeiro número: ";
	std::cin >> number1;

	std::cout << "Digite o segundo número: ";
	std::cin >> number2;

	TrocaNumeros(number1, number2);

	std::cout << "Valores depois da troca do número1 " << number1 << " e do número 2 " << number2 << " utilizando a primeira função com referências!" << std::endl;

	TrocaNumeros2(&number1, &number2);

	std::cout << "Valores depois da troca do número1 " << number1 << " e do número 2 " << number2 << " utilizando a segunda função com ponteiros!" << std::endl;


	system("pause");

	return 0;
}

void TrocaNumeros(int& number1, int& number2)
{
	int temp{ number1 };
	number1 = number2;
	number2 = temp;
}

void TrocaNumeros2(int* number1, int* number2)
{
	int temp{ *number1 };
	*number1 += *number2;
	*number2 = temp + 100;
}