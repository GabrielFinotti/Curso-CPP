#include <iostream>
//A diretiva de pré-processador #include indica para incluir o arquivo de cabeçalho iostream.
int main()
//Função principal. Todo programa C++ começa com esta função principal main().
{ //Chaves { indica início de um bloco e } final de um bloco.
	std::cout << "Primeiro Progama C++" << std::endl;
	//cout comando de saída de dados neste caso está solicitando para colocar na saída padrão(tela) a frase especificada.
	//endl indica para inserir um caractere de quebra de linha na frase ("string").
	system("pause");
	//system chama o shell do windows e adiciona o comando pause.

	return 0;
	//retorna um valor 0,sendo 0 um confirmando a execução bem sucedida do programa.
}

/*Alguns atalhos
crtl + shift + b - compilar o código fonte.
crtl + f5 - executar o programa.
crtl + k + c - comenta o código selecionado.
crtl + c no final da linha copia ela toda sem precisar selecionar toda a linha!.
*/