#include "Livro.h"

std::string Livro::getDataLivros() const
{
	std::stringstream DataLivro;
	DataLivro << "ID: " << id << "\n"
		<< "T�tulo: " << title << "\n"
		<< "Autor: " << autor << "\n"
		<< "Editor: " << editor << "\n"
		<< "Ano: " << year << std::endl;

	return DataLivro.str();
}