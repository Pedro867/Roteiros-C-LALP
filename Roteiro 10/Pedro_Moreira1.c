//Pedro Lucas Moreira 16/10/2023
//Struct pr�-definida
#include <stdio.h>
#include <string.h>

struct Aluno {
		float nota;
		char nome[50];
	};

int main (){	
	struct Aluno aluno1;
	
	strcpy(aluno1.nome, "Jo�o");
	aluno1.nota = 8.5;
	
	printf("Nome: %s\n", aluno1.nome);
	printf("Nota: %.2f", aluno1.nota);
	
	return 0;
}
