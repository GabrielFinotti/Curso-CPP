#pragma once
#include <iostream>
#include <sstream>

struct Livro
{
	int id;
	int year;
	std::string title;
	std::string autor;
	std::string editor;

	std::string getDataLivros() const;
};