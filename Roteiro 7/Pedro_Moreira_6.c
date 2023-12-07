//6) Contagem de Palavras
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main (){
	char string [100];
	int cont, palavra = 1;
	
	puts("Insira uma frase qualquer:");
	gets(string);
	
	cont = strlen(string);
	
	for (int i = 0; i < cont; i++){
		
		if (string[i] == ' '){
			palavra++;
		}
	}
	
	printf("\nO numero de palavras eh %d", palavra);
	
	return 0;
}
