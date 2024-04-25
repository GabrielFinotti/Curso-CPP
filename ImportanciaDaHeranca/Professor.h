#pragma once
#include "Pessoa.h"

class Professor :public Pessoa
{
	std::string departamento;

	void efetuarChamada();
	void entregarPauta();
};

