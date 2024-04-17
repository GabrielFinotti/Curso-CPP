#include <iostream>

void calcNumber(float, float);

int main()
{
	setlocale(0, "portuguese");

	float Numb1, Numb2;

	std::cout << "Insira o primeiro número: ";
	std::cin >> Numb1;
	std::cout << "\n";

	std::cout << "Insira o segundo número: ";
	std::cin >> Numb2;
	std::cout << "\n";

	std::cout << "Os resultados das operações são: \n";
	calcNumber(Numb1, Numb2);

	return 0;
}

void calcNumber(float Numb1, float Numb2)
{
	const double soma = Numb1 + Numb2;
	const double subtracao = Numb1 - Numb2;
	const double multiplicacao = Numb1 * Numb2;
	const double divisao = Numb1 / Numb2;

	std::cout << "Soma: " << soma << std::endl;
	std::cout << "Subtração: " << subtracao << std::endl;
	std::cout << "Multiplicação: " << multiplicacao << std::endl;
	std::cout << "Divisão: " << divisao << std::endl;

}