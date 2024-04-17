#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//Para declarar uma vari�vel que seja considerada um ponteiro basta colocar <tipo a ser apontado> *<nome da vari�vel>
	//Obs: a posi��o do asterisco nesta caso n�o importa int *ptr; d� no mesmo!
	int* ptr;
	int number{ 101 };

	std::cout << "Endere�o de N�mero: " << &number << "\n";
	std::cout << "Valor do n�mero antes do ponteiro: " << number << "\n";

	ptr = &number;

	std::cout << "Valor do ponterio: " << ptr << "\n";

	//Se ptr tem o endere�o da vari�vel n�mero dentro dele. Ele pode modificar o valor da vari�vel n�mero indiretamente!
	//Voc� quer indicar ao compillador que v� no endere�o de mem�ria que est� dentro de ptr e altere o valor deste local, utilizando o '*' antes do ponteiro!
	*ptr = 130;

	//Aqui vamos colocar na tela o ender�o de mem�ria da vari�vel n�mero. Ou seja onde ela est� carregada na mem�ria RAM. Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho.
	std::cout << "Endere�o de N�mero: " << &number << "\n";
	std::cout << "Valor do n�mero depois do ponteiro: " << number << "\n";

	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro ou seja qual lugar da RAM ele est� alocado? Veja n�s aidna n�o estamos colocando na tela nada que esteja dentro das vari�veis.
	//Pois para colocar o que est� dentro das vari�veis n�s usamos apenas o nome da vari�vel! Exemplo: std::cout << Numero; std::cout << ptr
	std::cout << "Endere�o de ptr: " << &ptr << std::endl;

	system("pause");

	return 0;
}