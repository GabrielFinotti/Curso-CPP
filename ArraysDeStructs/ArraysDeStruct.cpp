#include <iostream>
#include <string>

struct Livro
{
	int id{ 0 };
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};

int main()
{
	Livro livro[3];

	for (int i = 0; i < 3; i++)
	{
		std::cout << "***Cadastro de Livro***" << "\n";
		std::cout << "Digite ID do Livro " << (i + 1) << ": ";
		std::cin >> livro[i].id;

		std::cout << "\nDigite o Título do Livro: ";

		std::cin.ignore();
		std::getline(std::cin, livro[i].Titulo);

		std::cout << "\nDigite o Autor do Livro: ";
		std::getline(std::cin, livro[i].Autor);

		std::cout << "\nDigite A Editora do Livro: ";
		std::getline(std::cin, livro[i].Editora);

		std::cout << "ID: " << livro[i].id << "\n";
		std::cout << "Titulo: " << livro[i].Titulo << "\n";
		std::cout << "Autor: " << livro[i].Autor << "\n";
		std::cout << "Editora: " << livro[i].Editora << "\n";
	}

	system("PAUSE");
	return 0;
}