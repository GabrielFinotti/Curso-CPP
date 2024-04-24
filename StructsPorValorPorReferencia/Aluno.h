#pragma once
#include <iostream>
#include <iomanip>

struct Aluno
{
	long int matricula;
	std::string nome;
	std::string curso;
	int semestre;
	double mensalidade;
};

void mostrarDados(Aluno dados)
{
	std::cout << "********************Dados do Aluno*********************\n";
	std::cout << "\t\t Nome: " << dados.nome << std::endl;
	std::cout << "\t\t Matricula: " << dados.matricula << std::endl;
	std::cout << "\t\t Curso: " << dados.curso << std::endl;
	std::cout << "\t\t Semestre: " << dados.semestre << std::endl;
	std::cout << "\t\t Mensalidade: " << "R$" << std::fixed << std::setprecision(2) << dados.mensalidade << std::endl;
	std::cout << "*******************************************************\n";
}
void alterarDados(Aluno& dados)
{
	dados.nome = "Junin";
	dados.matricula = 424924924;
	dados.curso = "Agiotagem";
	dados.semestre = 6;
	dados.mensalidade = 500.20;
}
