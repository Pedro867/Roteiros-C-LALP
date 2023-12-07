//Pedro Lucas Moreira 16/10/2023
//Struct funcao 
#include <stdio.h>
#include <string.h>

struct Aluno {
		float nota;
		char nome[50];
	};
	
void imprimirValor(struct Aluno a){
	printf("Nome: %s\n", a.nome);
	printf("Nota: %.2f", a.nota);
}

int main (){	
	struct Aluno aluno1;
	
	strcpy(aluno1.nome, "Maria");
	aluno1.nota = 10;
	
	imprimirValor (aluno1);
	
	return 0;
}
