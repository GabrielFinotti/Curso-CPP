#include <iostream>
#include <iomanip>

int main()
{
	setlocale(0, "portuguese");

	float velocites[]{ 70.9f, 89.5f, 65.6f, 102.5f, 123.6f,63.4f, 74.5f, 99.5f, 68.7f };
	double media{ 0.0 }, result{ 0.0 };
	size_t size{ std::size(velocites) };

	for (auto velocity : velocites)
	{
		media += velocity;
	}

	result = media / size;

	std::cout << "A média das velocidades é: " << std::setprecision(4) << result << "km/h" << std::endl;

	system("pause");

	return 0;
}