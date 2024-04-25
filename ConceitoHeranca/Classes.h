#pragma once
#include <iostream>

class Base
{
public:
	void solicitarNum()
	{
		std::cout << "Num1: ";
		std::cin >> num1;
		std::cout << "Num2: ";
		std::cin >> num2;

		mostrarResultado(num1, num2);
	}

private:
	float num1, num2;

	float soma(int num1, int num2)
	{
		return (num1 + num2);
	}

	void mostrarResultado(int num1, int num2)
	{
		std::cout << "Soma dos números: " << soma(num1, num2) << std::endl;
	}
};

class Derivada :public Base
{

};