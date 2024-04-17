#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int numberInt{ 12 };
	float numberReal{ 34.562f };
	char caracter{ 'c' };

	std::string text{ "Texto da String" };

	std::printf("Valor Número Inteiro = %d\n", numberInt);
	std::printf("Valor Número Inteiro = %.2f\n", numberReal);

	//%d = número decimal inteiro
	//%f = número decimal de ponto flutuante. Serve tanto para float como para double.
	//%lf = serve para double. (l-long, f-float - lf)
	//%c = caractere: imprime o caractere que tem o código AScII correspondente ao valor dado.
	//%s seqência de caracteres (string, em inglês).

	system("pause");

	return 0;
}