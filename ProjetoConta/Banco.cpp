#include "Conta.h"

int main()
{
	setlocale(0, "portuguese");

	conta Conta01("Itau", 2222, 5555, "Junin", 20000);
	conta Conta02;

	std::cout << "Endereço de memória objeto conta01: " << &Conta01 << "\n";
	std::cout << "Endereço de memória objeto conta01: " << &Conta02 << "\n";

	Conta01.setBanco("Bradesco");
	Conta01.setAgencia(1234);
	Conta01.setNumConta(1227);
	Conta01.setTitular("Kleitin");
	Conta01.depositar(14690);
	Conta01.sacar(1500);

	Conta02.setBanco("Nubank");
	Conta02.setAgencia(4567);
	Conta02.setNumConta(6678);
	Conta02.setTitular("Finotti");

	Conta01.transferir(Conta02, 2000);
	Conta02.sacar(500);
	Conta02.sacar(5000);

	system("pause");

	return 0;
}