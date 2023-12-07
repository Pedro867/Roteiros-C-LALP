//Pedro Lucas Moreira 23/10/2023
//Manipular arquivo em C
#include <stdio.h>

int main (){
	char nome[100], frase[100];
	
	printf("Digite o nome do arquivo a ser aberto: ");
	gets(nome);
	
	FILE *arquivo;
	arquivo = fopen(nome, "w");
	
	if (arquivo == NULL){
		printf("\nNao foi possivel abrir o arquivo.\n");
		return 1;
	}
	
	printf("Insira uma frase no arquivo: ");
	gets(frase);
	
	fprintf(arquivo, "%s", frase);
	
	fclose(arquivo);
	
	return 0;
}

