#include <iostream>

//Protótipo de função. Faz a declaração da função sem ainda inicializa-lá, assim possibilitando criação da lógica da função posterior a função principal de chamada!
float soma(float Numb1, float Numb2);

int main()
{
	setlocale(0, "portuguese");

	std::cout << "O resultado é: " << soma(34.5664, 12);

	return 0;
}

float soma(float Numb1, float Numb2)
{
	const auto result = Numb1 + Numb2;

	return result;
}
