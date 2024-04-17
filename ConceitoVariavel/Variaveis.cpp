#include <iostream>
#include <tchar.h>

int main()
{
	//Fun��o que configura o console do Windows para mostara acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declara��o de vari�veis
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "*********IN�CIO DO JOGO***********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;

	//sizeof verifica o tamanho que a vari�vel est� ocupando na mem�ria
	std::cout << "Tamanho da vari�vel NumVidas: " << sizeof(NumVidas) << " Bytes\n";
	std::cout << "Tamanho da vari�vel Pontua��o: " << sizeof(Pontuacao) << " Bytes\n";
	std::cout << "Endere�o que NumVidas ocupa na Mem�ria RAM: " << &NumVidas << std::endl;
	std::cout << "Endere�o que Pontua��o ocupa na Mem�ria RAM: " << &Pontuacao << std::endl;
	std::cout << "*********DURANTE O JOGO***********" << std::endl;

	Pontuacao += 150;
	NumVidas -= 1;

	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;

	system("pause");
}