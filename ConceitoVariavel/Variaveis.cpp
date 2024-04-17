#include <iostream>
#include <tchar.h>

int main()
{
	//Função que configura o console do Windows para mostara acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declaração de variáveis
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "*********INíCIO DO JOGO***********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;

	//sizeof verifica o tamanho que a variável está ocupando na memória
	std::cout << "Tamanho da variável NumVidas: " << sizeof(NumVidas) << " Bytes\n";
	std::cout << "Tamanho da variável Pontuação: " << sizeof(Pontuacao) << " Bytes\n";
	std::cout << "Endereço que NumVidas ocupa na Memória RAM: " << &NumVidas << std::endl;
	std::cout << "Endereço que Pontuação ocupa na Memória RAM: " << &Pontuacao << std::endl;
	std::cout << "*********DURANTE O JOGO***********" << std::endl;

	Pontuacao += 150;
	NumVidas -= 1;

	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Pontuacao << std::endl;

	system("pause");
}