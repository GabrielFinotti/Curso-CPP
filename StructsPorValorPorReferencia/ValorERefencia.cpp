#include "Aluno.h"

int main()
{
	setlocale(0, "portuguese");

	Aluno aluno1{ 12345634, "Finotti", "C++", 3, 380.50 };

	mostrarDados(aluno1);
	alterarDados(aluno1);
	
	std::cout << "Depois de alterar os dados!" << std::endl;

	mostrarDados(aluno1);

	system("pause");

	return 0;
}