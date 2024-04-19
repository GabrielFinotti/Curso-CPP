#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	float notas[5];
	float media, soma{ 0.0f };
	std::string aluno;

	std::cout << "Digite o nome do aluno:";
	std::cin >> aluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Digite a " << (i + 1) << " nota: ";
		std::cin >> notas[i];

		soma += notas[i];
		
		system("cls");
	}

	media = soma / 5;

	std::cout << "A média do aluno " << aluno << " foi: " << media << std::endl;

	system("pause");

	return 0;
}