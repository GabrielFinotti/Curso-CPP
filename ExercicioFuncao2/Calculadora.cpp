#include <iostream>

void calcNumber(float, float);

int main()
{
	setlocale(0, "portuguese");

	float Numb1, Numb2;

	std::cout << "Insira o primeiro n�mero: ";
	std::cin >> Numb1;
	std::cout << "\n";

	std::cout << "Insira o segundo n�mero: ";
	std::cin >> Numb2;
	std::cout << "\n";

	std::cout << "Os resultados das opera��es s�o: \n";
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
	std::cout << "Subtra��o: " << subtracao << std::endl;
	std::cout << "Multiplica��o: " << multiplicacao << std::endl;
	std::cout << "Divis�o: " << divisao << std::endl;

}