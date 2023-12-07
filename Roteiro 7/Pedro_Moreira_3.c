//3) Palindromo
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main (){
	char palavra[20], inverso[20];
	int tamanho, cont = 0, retorno;
	
	puts("Digite uma palavra a ser analisada como palindromo:");
	scanf("%s",palavra);
	tamanho = strlen(palavra);
	
	for (int i = tamanho - 1; i >= 0; i--){
	  
		inverso[cont] = palavra[i];
		printf("%c", inverso[cont]);
		cont++;
		
	}
	
	retorno = strcmp(palavra, inverso);
	
	if (retorno == 0){
		puts("\n\nEh palindromo!");
	}
	else{
		puts("\n\nNao eh palindromo!");
	}
	
	return 0;
}
