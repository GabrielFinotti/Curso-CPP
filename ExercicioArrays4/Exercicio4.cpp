#include <iostream>
#include <iomanip>

int main()
{
	setlocale(0, "portuguese");

	float notas[]{ 4.9f, 9.5f, 5.6f, 2.5f, 9.6f, 6.4f, 7.5f, 9.8f, 8.7f, 10.0f };
	size_t size{ std::size(notas) };
	double media{ 0.0 }, result{ 0.0 };
	int cont{ 0 };

	for (auto nota : notas)
	{
		std::cout << "Nota " << (cont + 1) << ": " << nota << "\n";
		media += nota;
		cont++;
	}

	result = media / size;
	std::cout << "A média das notas é: " << std::setprecision(3) << result << std::endl;

	system("pause");

	return 0;
}