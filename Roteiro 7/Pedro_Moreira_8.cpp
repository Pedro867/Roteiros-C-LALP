//8) Remoção de Espaços em Branco
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main () {
	char frase [100];
	int tamanho;
	
	puts("Digite seu nome: ");
	gets(frase);
	
	tamanho = strlen(frase);
	
	for (int i = 0; i <= tamanho - 1; i++){
		
		if (frase[i] == ' ')
		{
			continue;
		}
		printf("%c", frase[i]);
	}
	
	return 0;
}
