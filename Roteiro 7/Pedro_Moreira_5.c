//3) Palíndromo
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main (){
	char palavra[100], palavrainv[100];
	int tamanho;
	
	puts("Digite uma palavra a ser analisada como palindromo:");
	gets(palavra);
	tamanho = strlen(palavra);
	int j = tamanho;
	strcpy(palavrainv, palavra);
	
	for (int i = tamanho - 1; i >= 0; i--){
		palavra[j] = palavra[i];
		printf("%c", palavra[j]);
		j--;
	}
	if (strcmp(palavra, palavrainv) == 0){
		puts("\n\nEh palindromo!");
	}
	else{
		puts("\n\nNao eh palindromo!");
	}
	
	return 0;
}
