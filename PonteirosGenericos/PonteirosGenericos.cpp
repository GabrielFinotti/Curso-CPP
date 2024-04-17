#include <iostream>

int main()
{
	setlocale(0, "portuguese");
	int number{ 4890 };
	char letra{ 'E' };

	//Declar ponteiro genérico ou vazio(void) significa que ele não tem ainda um tipo que possa apontar. Isso é útil quando você por exemplo retorna algo de alguma função e atribui a um ponteiro. Neste caso você não sabe de antemão que tipo de dado você vai retornar e assim depois você pode esepecificar qual tipo de dado o ponteiro void* passará a apontar
	void* ptrg;

	//Agora ptrg passa a apontar para a variável letra, pois ele recebeu o endereço de memória desta variável.
	ptrg = &letra;

	std::cout << "Valor do ponteiro: " << ptrg << "\n";

	//Primeiro você faz o cast e depois coloca o sinal de desreferenciamento. *(cast para tipo desejado*)NomeDoPonteiro <*(int*)ptrG>
	std::cout << "Valor da variável de endereço salva no ponteiro: " << *(char*)ptrg << std::endl;

	ptrg = &number;

	std::cout << "Valor do ponteiro após receber a referência de número: " << ptrg << "\n";
	std::cout << "Valor da variável de endereço salva no ponteiro após receber a referência de número: " << *(int*)ptrg << std::endl;


	system("pause");

	return 0;
}