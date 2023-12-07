//Pedro Lucas Moreira 16/10/2023
//Struct array
#include <stdio.h>
#include <string.h>

struct Aluno {
		float nota;
		char nome[50];
	};

int main (){	
	struct Aluno alunos[5];
	
	for (int i = 0; i < 5; i ++){
		printf("Digite o nome do aluno %d: ", i+1);
		scanf("%s", alunos[i].nome);
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &alunos[i].nota);
	}
	printf("\n\n");
	
	for (int i = 0; i < 5; i++){
		printf("Aluno: %d\n", i+1);
		printf("Nome: %s\n", alunos[i].nome);
		printf("Nota: %.2f\n", alunos[i].nota);
	}
	
	return 0;
}
