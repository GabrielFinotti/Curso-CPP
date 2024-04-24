#include <iostream>
#include <ctime>

int main()
{
	time_t horaAtual = time(0);
	tm minhaHora;
	localtime_s(&minhaHora, &horaAtual);

	std::cout << "Hora: " << minhaHora.tm_hour << ":" << minhaHora.tm_min << "\n";
	std::cout << "Dia: " << minhaHora.tm_mday;

	system("pause");

	return 0;
}