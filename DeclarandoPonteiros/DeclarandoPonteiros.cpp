#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//Para declarar uma variável que seja considerada um ponteiro basta colocar <tipo a ser apontado> *<nome da variável>
	//Obs: a posição do asterisco nesta caso não importa int *ptr; dá no mesmo!
	int* ptr;
	int number{ 101 };

	std::cout << "Endereço de Número: " << &number << "\n";
	std::cout << "Valor do número antes do ponteiro: " << number << "\n";

	ptr = &number;

	std::cout << "Valor do ponterio: " << ptr << "\n";

	//Se ptr tem o endereço da variável número dentro dele. Ele pode modificar o valor da variável número indiretamente!
	//Você quer indicar ao compillador que vá no endereço de memória que está dentro de ptr e altere o valor deste local, utilizando o '*' antes do ponteiro!
	*ptr = 130;

	//Aqui vamos colocar na tela o enderço de memória da variável número. Ou seja onde ela está carregada na memória RAM. Lembre-se que o que vai para tela é o primeiro endereço da variável número pois ela ocupa 4 endereços pois tem 4 bytes de tamanho.
	std::cout << "Endereço de Número: " << &number << "\n";
	std::cout << "Valor do número depois do ponteiro: " << number << "\n";

	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endereço de memória alocado para variável ponteiro ou seja qual lugar da RAM ele está alocado? Veja nós aidna não estamos colocando na tela nada que esteja dentro das variáveis.
	//Pois para colocar o que está dentro das variáveis nós usamos apenas o nome da variável! Exemplo: std::cout << Numero; std::cout << ptr
	std::cout << "Endereço de ptr: " << &ptr << std::endl;

	system("pause");

	return 0;
}