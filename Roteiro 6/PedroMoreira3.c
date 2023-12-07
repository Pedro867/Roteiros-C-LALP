#include <stdio.h>

int main (){
	char nome[20 + 1];
	
	printf("Insira seu nome: ");
	scanf ("%s", nome);
	
	printf ("Ola, %s! Seja bem vindo(a) ao meu programa.", nome);
	
	return 0;
}
