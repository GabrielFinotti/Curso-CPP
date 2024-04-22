#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int numArray[20], numElements, maxNumb, minNumb;

	std::cout << "Digite o número de elementos desejado: ";
	std::cin >> numElements;

	for (int i = 0; i < numElements; i++)
	{
		std::cout << "Digite o " << (i + 1) << " número: ";
		std::cin >> numArray[i];

		system("cls");
	}

	maxNumb = numArray[0];
	minNumb = numArray[0];

	for (int i = 0; i < numElements; i++)
	{
		if (numArray[i] > maxNumb)
		{
			maxNumb = numArray[i];
		}
		else if(numArray[i] < minNumb) 
		{
			minNumb = numArray[i];
		}
	}

	std::cout << "O menor valor digitado foi: " << minNumb << "\n";
	std::cout << "O maior digitado foi: " << maxNumb << std::endl;

	system("pause");

	return 0;
}