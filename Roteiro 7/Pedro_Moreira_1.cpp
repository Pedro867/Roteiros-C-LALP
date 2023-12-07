//1) Contagem de Caracteres
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main (){
	char string[100];
	int cont;
	
	puts("Digite seu nome: ");
	gets(string);
	
	cont = strlen(string);
	
	for (int i = 0; i < cont; i++){
		
		if (string[i] == ' '){
			cont --;
		}
	}
	
	printf("\nA string tem %d caracteres!", cont);
	
	return 0;
}
