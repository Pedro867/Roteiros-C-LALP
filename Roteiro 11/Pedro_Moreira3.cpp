//Pedro Lucas Moreira 23/10/2023
//Armazenar tabela em um arquivo
#include <stdio.h>

int main (){
	int codigo = 0;
	char nome[50];
	float preco;
	
	FILE *arquivo;
	arquivo = fopen("tabela.txt", "w");
	
	if (arquivo == NULL){
		printf("\nNao foi possivel abrir o arquivo.\n");
		return 1;
	}
	
	printf("Insira o codigo, nome e preco do produto. Caso queira parar, digite -1\n");
	while (1){
		printf("Codigo: ");
		scanf("%d", &codigo);
		
		if (codigo == -1){
			break;
		}
		
		printf("Nome: ");
		scanf("%s", nome);
		printf("Preco: ");
		scanf("%f", &preco);
		fprintf(arquivo, "%d\t%s\t%.2f\n", codigo, nome, preco);
	}
	
	fclose(arquivo);
	
	return 0;
}
