//Pedro Lucas Moreira 30/10/2023
//Programa para ler os números inteiros de um arquivo .txt
#include <stdio.h>

int main (){
	FILE *arquivo;
	arquivo = fopen("numeros.txt", "r");
	int  numero;
	float med, cont = 0, soma = 0;
	
	if (arquivo == NULL){
		printf("\nNao foi possivel abrir o arquivo.\n");
		return 1;
	}
	
	while (fscanf(arquivo, "%d", &numero) != EOF){
		
		printf("%d ", numero);
		soma += numero;
		cont++;
		
	}
	
	fclose(arquivo);
	
	med = soma/cont;
	
	printf("\nA media eh: %.2f", med);
	
		
	return 0;
}
