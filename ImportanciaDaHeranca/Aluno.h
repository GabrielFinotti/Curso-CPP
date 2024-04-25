#pragma once
#include "Pessoa.h"

class Aluno :public Pessoa
{
	std::string curso;

	void realizarProva();
};
