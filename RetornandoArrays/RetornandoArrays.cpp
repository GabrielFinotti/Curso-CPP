#include <iostream>

void duplicateVetor(int*, int);
int* invertVetor(int*, int);
void showVetor(int*, int);

int main()
{
	setlocale(0, "portuguese");

	int number[]{ 1,2,3,4,5,6,7,8,9,10 };
	int size{ std::size(number) };

	showVetor(number, size);
	duplicateVetor(number, size);
	showVetor(invertVetor(number, size), size);

	system("pause");

	return 0;
}

void duplicateVetor(int* Array, int size)
{
	for (int i = 0; i < 10; i++)
	{
		Array[i] = 2 * Array[i];
	}
}

int* invertVetor(int* Array, int size)
{
	int j = 0;
	static int arrayInvert[10];

	for (int i = size - 1; i >= 0; i--)
	{
		arrayInvert[j] = Array[i];
		j++;
	}

	return arrayInvert;
}

void showVetor(int* Array, int size)
{
	std::cout << "[ ";
	
	for (int i = 0; i < size; i++)
	{
		std::cout << Array[i] << "  ";
	}

	std::cout << " ]\n\n";
}