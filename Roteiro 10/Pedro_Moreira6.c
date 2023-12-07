//Pedro Lucas Moreira 16/10/2023
//Struct Curso com array de outro struct dentro
#include <stdio.h>

struct Aluno {
		float nota;
		char nome[50];
	};
	
struct Curso {
	struct Aluno alunos[5];
};

int main (){	
	struct Curso curso1;
	
	for (int i = 0; i < 5; i ++){
		printf("Digite o nome do aluno %d: ", i+1);
		scanf("%s", curso1.alunos[i].nome);
		printf("Digite a nota do aluno %d: ", i+1);
		scanf("%f", &curso1.alunos[i].nota);
	}
	printf("\n\n");
	
	for (int i = 0; i < 5; i++){
		printf("Aluno: %d\n", i+1);
		printf("Nome: %s\n", curso1.alunos[i].nome);
		printf("Nota: %.2f\n\n", curso1.alunos[i].nota);
	}
}
