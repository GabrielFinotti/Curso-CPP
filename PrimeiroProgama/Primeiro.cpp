#include <iostream>
//A diretiva de pr�-processador #include indica para incluir o arquivo de cabe�alho iostream.
int main()
//Fun��o principal. Todo programa C++ come�a com esta fun��o principal main().
{ //Chaves { indica in�cio de um bloco e } final de um bloco.
	std::cout << "Primeiro Progama C++" << std::endl;
	//cout comando de sa�da de dados neste caso est� solicitando para colocar na sa�da padr�o(tela) a frase especificada.
	//endl indica para inserir um caractere de quebra de linha na frase ("string").
	system("pause");
	//system chama o shell do windows e adiciona o comando pause.

	return 0;
	//retorna um valor 0,sendo 0 um confirmando a execu��o bem sucedida do programa.
}

/*Alguns atalhos
crtl + shift + b - compilar o c�digo fonte.
crtl + f5 - executar o programa.
crtl + k + c - comenta o c�digo selecionado.
crtl + c no final da linha copia ela toda sem precisar selecionar toda a linha!.
*/