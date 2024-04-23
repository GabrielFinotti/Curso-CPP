#include <iostream>

struct data
{
	int dia;
	int mes;
	int ano;
};

int main()
{
	data agenda{};
	agenda.dia = 22;
	agenda.mes = 07;
	agenda.ano = 2013;

	std::cout << "Dia: " << agenda.dia << " Mes: " << agenda.mes << " Ano: " << agenda.ano << std::endl;

	system("pause");

	return 0;
}