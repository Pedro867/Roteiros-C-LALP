//Pedro Lucas Moreira 30/10/2023
//Programa para ler os números inteiros de um arquivo .txt
#include <stdio.h>

int main (){
	FILE *arquivo;
	arquivo = fopen("mensagem.txt", "w");
	
	fprintf(arquivo ,"Esta é uma mensagem de exemplo que será escrita no arquivo.");
	
	fclose(arquivo);
	
	return 0;
}
