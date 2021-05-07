#include <stdio.h>
#include <stdlib.h>

int main (){

	void matricula();
	void retorno();

	char opcao1;

	printf("Bem-vindo ao Cadastro de alunos !\n");
	printf("Deseja cadastrar um novo aluno ?\n");
	printf("Digite [S] para SIM ou [N] para NÃO\n");

	scanf("%c", &opcao1);

	if (opcao1 == 'S' || opcao1 == 's'){
		matricula();
	} else if (opcao1 == 'N' || opcao1 == 'n'){
		retorno();
	}

	
return 0;
}

void matricula (){

	char nome [50];
	int mat, idade ;

	printf("Digite o nome do aluno !\n");
	scanf ("%s", nome);
	printf("Digite a matricula do aluno !\n");
	scanf("%i", &mat);
	printf("Digite a idade do aluno !\n");
	scanf("%i", &idade);

}

void retorno (){

	char opcao2;
	int main();

	printf("Ok, deseja encerrar a aplicação ?\n");
	printf("Digite [S] para SIM ou [N] para NÃO\n");

	scanf("%c", &opcao2);

	if (opcao2 == 'S' || opcao2 == 's'){
		exit(0);
	} else if (opcao2 == 'N' || opcao2 == 'n'){
		main();
	}

}