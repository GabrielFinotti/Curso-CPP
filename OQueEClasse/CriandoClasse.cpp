#include <iostream>

class Casa
{
private:
	int numQuartos{ 4 };
	float size{ 90.0f };
	bool btemSuite{ true };
	
public:
	void showSize() const;
	int obterNumQuartos() const;
	bool TemSuite() const;
	void setNumQuartos(int);
};

int main()
{
	setlocale(0, "portuguese");

	Casa casaDePraia;

	std::cout << "Tamanho da casa: "; 
	casaDePraia.showSize();
	std::cout << "\n";

	std::cout << "Quantidade de quartos: " << casaDePraia.obterNumQuartos() << "\n";

	std::cout << "Tem suite? ";
	casaDePraia.TemSuite() ? std::cout << "Sim" : std::cout << "Não";

	casaDePraia.setNumQuartos(3);
	std::cout << std::endl;

	system("pause");

	return 0;
}

void Casa::showSize() const
{
	std::cout << size;
}

int Casa::obterNumQuartos() const
{
	return numQuartos;
}

bool Casa::TemSuite() const
{
	return btemSuite;
}

void Casa::setNumQuartos(int num)
{
	if ((num <= 6) && (num >= 0))
	{
		numQuartos = num;
	}
	else
	{
		std::cout << "Número de quartos inválidos!";
	}
}
