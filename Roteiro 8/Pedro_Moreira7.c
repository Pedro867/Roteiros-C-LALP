//Pedro Lucas Moreira - 25/09/2023
//Programa para ver se os nomes estão repetidos
#include <stdio.h>
#include <string.h>

int main(){
	int i, cont = 0, comparacao;
	char nome[10][50];
	
	for (int i = 0; i < 10; i++){
		printf("Digite um nome: ");
		scanf("%s", nome[i]);
	}
	
	printf("\nOs nomes repetidos sao:\n");
	
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			
			if (i == j){
				continue;
			}
			comparacao = strcmp(nome[i], nome[j]);
			
			if (comparacao == 0){
				printf("%s\n", nome[i]);
				cont++;
			}
		}
	}
	if (cont == 0){
		printf("\nNao ha nomes iguais");
	}
	return 0;
}
