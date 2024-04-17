#include <iostream>
#include <tchar.h>
#include <iomanip>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numb1;
	float Numb2;
	double Numb3;
	char Caracter;
	char Caracter2;
	bool bAchou;
	bool bNachou;

	Numb1 = 45;
	Numb2 = 55.56f;
	Numb3 = 45345.904555;
	Caracter = '3';
	Caracter2 = '%';
	bAchou = true;
	bNachou = false;

	std::cout << "Valor do Número 1: " << Numb1 << "\n";
	std::cout << "Tamanho da variável: " << sizeof(Numb1) << "Bytes\n";
	std::cout << "Endereço Carregado na memória: " << &Numb1 << "\n";

	std::cout << "Valor do Número 2: " << Numb2 << "\n";
	std::cout << "Tamanho da variável: " << sizeof(Numb2) << "Bytes\n";
	std::cout << "Endereço Carregado na memória: " << &Numb2 << "\n";

	std::cout << "Valor do Número 3: " << std::setprecision(12) << Numb3 << "\n";
	std::cout << "Tamanho da variável: " << sizeof(Numb3) << "Bytes\n";
	std::cout << "Endereço Carregado na memória: " << &Numb3 << "\n";

	std::cout << "Valor do Caractere: " << Caracter << "\n";
	std::cout << "Tamanho da variável: " << sizeof(Caracter) << "Bytes\n";
	std::cout << "Endereço Carregado na memória: " << (void *) & Caracter << "\n";

	std::cout << "Valor do Caractere 2: " << Caracter2 << "\n";
	std::cout << "Tamanho da variável: " << sizeof(Caracter2) << "Bytes\n";
	std::cout << "Endereço Carregado na memória: " << (void *) & Caracter2 << "\n";

	system("pause");
}