#include <iostream>

int main()
{
	setlocale(0, "portuguese");

	int vetor[]{ 1, 23, -78, 900, 234 };
	int* ptr{ nullptr };

	ptr = vetor;

	for (int i = 0; i < 5;i++)
	{
		std::cout << "Endereço do vetor[" << i << "]: " << &vetor[i] << ". Valor do vetor: " << vetor[i] << "\n";
	}

	system("pause");

	return 0;
}