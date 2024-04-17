#include <iostream>
#include "Matematica.h"

int main()
{
	setlocale(0, "portuguese");

	int numb1, numb2;

	std::cout << "Insira o primeiro n�mero: ";
	std::cin >> numb1;
	std::cout << "\n";

	std::cout << "Insira o segundo n�mero: ";
	std::cin >> numb2;
	std::cout << "\n";

	std::cout << "Resultados dos Operadores Mate�ticos:\n";
	std::cout << "Soma: " << soma(numb1, numb2) << std::endl;
	std::cout << "Subtra��o: " << sub(numb1, numb2) << std::endl;
	std::cout << "Multiplica��o: " << multi(numb1, numb2) << std::endl;
	std::cout << "Divis�o: " << divs(numb1, numb2) << std::endl;
	std::cout << "Potencia��o: " << pot(numb1, numb2) << std::endl;
	std::cout << "Raiz Quadrada do primeiro n�mero: " << raiz(numb1) << std::endl;
	std::cout << "Raiz Quadrada do segundo n�mero: " << raiz(numb2) << std::endl;

	return 0;
}