//7) Maiúsculas e Minúsculas
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main (){
	char string[100], mais[100], menos[100];
	int tamanho;
	
	puts("Digite uma palavra");
	gets(string);
	
	printf("\nPalavra normal: %s", string);
	
	strupr(string);
	printf("\n\nPalavra Maíusucula: %s", string);
	
	strlwr(string);
	printf("\n\nPalavra Minúscula: %s", string);
	
	return 0;
}
