#include <iostream>

int main()
{
	int number{ 1024 };
	int number2{ 2024 };

	//Observe que a refer�ncia n�o pode ficar sem ser atribuida logo na sua cria��o!.
	int& RefNum{ number };
	//Agora est� ok pois Ref passa a ser uma refer�ncia de number.
	RefNum = 5644;
	//Refer�nca n�o pode mudar sua atribui��o como os ponteiros pois ele referencia uma vari�vel uma �nica vez.
	//Refer�ncia n�o poder ser declarada sem ser iniciada, diferentes dos ponteiros que podem ser iniciados como null.

	int* ptr = &number;

	*ptr = 4048;

	std::cout << "Valor de Number: " << *ptr << "\n";

	ptr = &number2;

	*ptr = number + 2000;

	std::cout << "Valor do Number2: " << *ptr << "\n";

	return 0;
}