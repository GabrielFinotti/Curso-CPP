#include "Conta.h"

conta::conta()
{
	banco = "";
	agencia = 0;
	numConta = 0;
	titular = "";
	saldo = 0.0;

	std::cout << "\Construtor Objeto Endereço: " << this << " executado!\n";
}

conta::conta(std::string banco, int agencia, int numConta, std::string titular, double saldo)
{
	this->banco = banco;
	this->agencia = agencia;
	this->numConta = numConta;
	this->titular = titular;
	this->saldo = saldo;

	std::cout << "\Construtor Objeto Endereço: " << this << " executado!\n";
}

conta::~conta()
{
	std::cout << "\nDestrutor Objeto Endereço: " << this << " executado!\n";
}

bool conta::sacar(double valor)
{
	if (saldo < valor)
	{
		std::cout << "\nSaldo Insuficiente\n";
		std::cout << "Seu saldo atual: R$" << consultarSaldo() << "\n";

		return false;
	}
	else
	{
		saldo = saldo - valor;

		std::cout << "Seu saldo atual: R$" << consultarSaldo() << "\n";

		return true;
	}
}

void conta::depositar(double valor)
{
	saldo += valor;

	std::cout << "\nDepósito de R$" << valor << " efetuado com sucesso!\n";
}

void conta::transferir(conta& destino, double valor)
{
	if (saldo < valor)
	{
		std::cout << "\nSaldo insuficiente!\n";
	}
	else
	{
		destino.depositar(valor);
		saldo -= valor;
		
		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << destino.getTitular() << "\n";
		std::cout << "Banco: " << destino.getBanco() << "\n";
		std::cout << "Agência: " << destino.getAgencia() << "\n";
		std::cout << "Conta: " << destino.getNumConta() << "\n";
		std::cout << "Transferência realizada com sucesso!\n";
		std::cout << "Seu saldo atual: R$" << consultarSaldo() << "\n";
	}
}

double conta::consultarSaldo()
{
	return saldo;
}

std::string conta::getBanco()
{
	return banco;
}

int conta::getAgencia()
{
	return agencia;
}

int conta::getNumConta()
{
	return numConta;
}

std::string conta::getTitular()
{
	return titular;
}

void conta::getEnderecoThis()
{
	std::cout << "\nthis contém dentro o endereço: " << this << "\n";
}

void conta::setBanco(std::string banco)
{
	this->banco = banco;
}

void conta::setAgencia(int agencia)
{
	this->agencia = agencia;
}

void conta::setNumConta(int numConta)
{
	this->numConta = numConta;
}

void conta::setTitular(std::string titular)
{
	this->titular = titular;
}