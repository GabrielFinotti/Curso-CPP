#include <iostream>;

void showArray(int [], int);

int main()
{
	int vetor[]{ 1,2,3,4,5,6,7,8,9,10 };
	int sizeArray = sizeof(vetor);

	//sizeof devolve o número em Bytes do tamanho de uma variável, se um inteiro tem 4 bytes, um vetor com 10 inteiros tem 40 bytes.
	//Se quiser saber a quantidade de elementos de um vetor utilizando o sizeof, pode utilizar o sizeof(nomeDoVetor) dividido pelo sizeof(tipoDeDados): sizeof(Array) / sizeof(int).
	std::cout << "Tamanho do Vetor: " << sizeArray << "\n";

	//std::size ja nos retorna o tamanho do array feito com o calculo do sizeof, ou seja, retorna a quantidade de elementos contido no array(vetor), e não o seu tamanho em bytes.
	showArray(vetor, std::size(vetor));

	system("pause");

	return 0;
}

void showArray(int array[], int sizeArray)
{
	std::cout << "Tamanho do array: " << sizeArray << "\n";

	for (int i = 0; i < sizeArray; i++)
	{
		std::cout << "Valor do " << (i + 1) << " dado do array: " << array[i] << std::endl;
	}
}