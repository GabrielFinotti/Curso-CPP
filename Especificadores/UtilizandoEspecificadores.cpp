#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL,"portuguese");
	int numberInt{ 12 };
	float numberReal{ 34.562f };
	char caracter{ 'c' };

	std::string text{ "Texto da String" };

	std::printf("Valor N�mero Inteiro = %d\n", numberInt);
	std::printf("Valor N�mero Inteiro = %.2f\n", numberReal);

	//%d = n�mero decimal inteiro
	//%f = n�mero decimal de ponto flutuante. Serve tanto para float como para double.
	//%lf = serve para double. (l-long, f-float - lf)
	//%c = caractere: imprime o caractere que tem o c�digo AScII correspondente ao valor dado.
	//%s seq�ncia de caracteres (string, em ingl�s).

	system("pause");

	return 0;
}