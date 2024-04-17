#include <iostream>

int main()
{
	setlocale(0, "portuguese");
	int number{ 1024 };
	char letra{ 'A' };
	int& Ref = number;

	std::cout << "Valor de número usando Ref: " << Ref << "\n";

	system("pause");

	return 0;
}