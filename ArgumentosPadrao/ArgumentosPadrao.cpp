#include <iostream>

void coordenate(int = 1, int = 8, int);

int main()
{
	coordenate(5, 4, 7);

	system("pause");

	return 0;
}

void coordenate(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;

	std::cout << "(" << x << " - " << y << " - " << z << ")" << std::endl;
}