#include <iostream>

int main()
{
	int number{ 1024 };
	int number2{ 2024 };

	//Observe que a referência não pode ficar sem ser atribuida logo na sua criação!.
	int& RefNum{ number };
	//Agora está ok pois Ref passa a ser uma referência de number.
	RefNum = 5644;
	//Referênca não pode mudar sua atribuição como os ponteiros pois ele referencia uma variável uma única vez.
	//Referência não poder ser declarada sem ser iniciada, diferentes dos ponteiros que podem ser iniciados como null.

	int* ptr = &number;

	*ptr = 4048;

	std::cout << "Valor de Number: " << *ptr << "\n";

	ptr = &number2;

	*ptr = number + 2000;

	std::cout << "Valor do Number2: " << *ptr << "\n";

	return 0;
}