#include <iostream>

int main()
{
	setlocale(0, "portuguese");
	int number{ 4890 };
	char letra{ 'E' };

	//Declar ponteiro gen�rico ou vazio(void) significa que ele n�o tem ainda um tipo que possa apontar. Isso � �til quando voc� por exemplo retorna algo de alguma fun��o e atribui a um ponteiro. Neste caso voc� n�o sabe de antem�o que tipo de dado voc� vai retornar e assim depois voc� pode esepecificar qual tipo de dado o ponteiro void* passar� a apontar
	void* ptrg;

	//Agora ptrg passa a apontar para a vari�vel letra, pois ele recebeu o endere�o de mem�ria desta vari�vel.
	ptrg = &letra;

	std::cout << "Valor do ponteiro: " << ptrg << "\n";

	//Primeiro voc� faz o cast e depois coloca o sinal de desreferenciamento. *(cast para tipo desejado*)NomeDoPonteiro <*(int*)ptrG>
	std::cout << "Valor da vari�vel de endere�o salva no ponteiro: " << *(char*)ptrg << std::endl;

	ptrg = &number;

	std::cout << "Valor do ponteiro ap�s receber a refer�ncia de n�mero: " << ptrg << "\n";
	std::cout << "Valor da vari�vel de endere�o salva no ponteiro ap�s receber a refer�ncia de n�mero: " << *(int*)ptrg << std::endl;


	system("pause");

	return 0;
}