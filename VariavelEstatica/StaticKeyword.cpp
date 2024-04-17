#include <iostream>

int CountCall()
{
	static int NumberCallFunction = 0;
	NumberCallFunction++;

	return NumberCallFunction;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << CountCall() << std::endl;
	}

	system("pause");

	return 0;
}