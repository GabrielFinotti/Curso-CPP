#include "Livro.h"

int main()
{
	setlocale(0, "portuguese");

	Livro livro;

	std::cout << "***Cadastro de Livro***" << "\n";
	std::cout << "Digite ID do Livro: ";
	std::cin >> livro.id;

	std::cout << "Digite o título do livro: ";
	std::cin.ignore();
	std::getline(std::cin, livro.title);

	std::cout << "Digite o autor do livro: ";
	std::getline(std::cin, livro.autor);

	std::cout << "Digite a editora: ";
	std::getline(std::cin, livro.editor);

	std::cout << "Digite o ano: ";
	std::cin >> livro.year;

	system("cls");

	std::cout << livro.getDataLivros();

	system("pause");

	return 0;
}