#include <iostream>

int main()
{
	setlocale(0, "portuguese");

	int matriz[5][5];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < j)
			{
				std::cout << " 1 ";
			}
			else if (i == j)
			{
				std::cout << " 0 ";
			}
			else
			{
				std::cout << "-1 ";
			}
		}
		
		std::cout << "\n";
	}
	system("pause");

	return 0;
}