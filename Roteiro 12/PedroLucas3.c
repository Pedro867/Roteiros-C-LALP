//Pedro Lucas Moreira 30/10/2023
//Programa para tansformar o conteudo de um arquivo em maiúsculo
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
	char frase[100], caracter;
	int i = 0;
	
	FILE *arquivo;
	arquivo = fopen("entrada.txt", "r");
	if (arquivo == NULL){
		printf("\nNao foi possivel abrir o arquivo.\n");
		return 1;
	}
	
	fgets(frase, 100, arquivo);
	
	fclose(arquivo);
	
	FILE *arq2;
	arq2 = fopen("saida.txt", "w");
	if (arq2 == NULL){
		printf("\nNao foi possivel abrir o arquivo.\n");
		return 1;
	}
	
	int tam;
	tam = strlen(frase);
	
	for (int i = 0; i < tam; i++){
		frase[i] = toupper(frase[i]);
		fprintf(arq2 ,"%c", frase[i]);
	}
	
	fclose(arq2);
	
	printf("\nO texto foi convertido em maiúsculas e salvo no arquivo 'saida.txt'");
	
	return 0;
}
