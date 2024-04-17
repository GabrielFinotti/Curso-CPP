#include <iostream>
#include <tchar.h>

constexpr auto NUM_VID = 10;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	const int NUM_VIDAS = 10;
	int totalDeVidas;
	totalDeVidas = NUM_VIDAS - 1;

	std::cout << "Total de Vidas: " << totalDeVidas << "\n";
	std::cout << "Valor Constante de Vidas: " << NUM_VID << "\n";

	system("pause");
}