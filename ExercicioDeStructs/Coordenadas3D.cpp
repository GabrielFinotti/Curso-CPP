#include "Coordenadas3D.h"

void desenharPonto3D(pontos3D);

int main()
{
	setlocale(0, "portuguese");

	pontos3D pontoC{3, 4, 10};

	desenharPonto3D(pontoC);

	system("pause");

	return 0;
}

void desenharPonto3D(pontos3D pontos)
{
	std::cout << "X:" << pontos.x << " Y:" << pontos.y << " Z:" << pontos.z << std::endl;
}