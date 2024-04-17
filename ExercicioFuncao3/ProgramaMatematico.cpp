#include <iostream>
#include "Matematica.h"

int main()
{
	setlocale(0, "portuguese");

	int numb1, numb2;

	std::cout << "Insira o primeiro número: ";
	std::cin >> numb1;
	std::cout << "\n";

	std::cout << "Insira o segundo número: ";
	std::cin >> numb2;
	std::cout << "\n";

	std::cout << "Resultados dos Operadores Mateáticos:\n";
	std::cout << "Soma: " << soma(numb1, numb2) << std::endl;
	std::cout << "Subtração: " << sub(numb1, numb2) << std::endl;
	std::cout << "Multiplicação: " << multi(numb1, numb2) << std::endl;
	std::cout << "Divisão: " << divs(numb1, numb2) << std::endl;
	std::cout << "Potenciação: " << pot(numb1, numb2) << std::endl;
	std::cout << "Raiz Quadrada do primeiro número: " << raiz(numb1) << std::endl;
	std::cout << "Raiz Quadrada do segundo número: " << raiz(numb2) << std::endl;

	return 0;
}