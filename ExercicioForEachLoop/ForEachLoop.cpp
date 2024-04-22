#include <iostream>

int main()
{
	int years[]{ 1998, 2011, 2014, 2017, 2020 };

	//for(nomeDoIndice : vetor) é o forEach do c++.
	for (auto year : years)
	{
		std::cout << year << "\n";
	}

	system("pause");

	return 0;
}