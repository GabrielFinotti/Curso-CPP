#include <iostream>

//Prot�tipo de fun��o. Faz a declara��o da fun��o sem ainda inicializa-l�, assim possibilitando cria��o da l�gica da fun��o posterior a fun��o principal de chamada!
float soma(float Numb1, float Numb2);

int main()
{
	setlocale(0, "portuguese");

	std::cout << "O resultado �: " << soma(34.5664, 12);

	return 0;
}

float soma(float Numb1, float Numb2)
{
	const auto result = Numb1 + Numb2;

	return result;
}
