#pragma once
#include <iostream>

class conta
{
private:
	std::string banco;
	int agencia;
	int numConta;
	std::string titular;
	double saldo;

public:
	conta();
	conta(std::string banco, int agencia, int numConta, std::string titular, double saldo);
	~conta();
	bool sacar(double);
	void depositar(double);
	void transferir(conta&, double);
	double consultarSaldo();
	std::string getBanco();
	int getAgencia();
	int getNumConta();
	std::string getTitular();
	void getEnderecoThis();
	void setBanco(std::string);
	void setAgencia(int);
	void setTitular(std::string);
	void setNumConta(int);
};
 