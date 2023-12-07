#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arquivo;
	arquivo = fopen("teste.txt", "r");
	char caractere;
	
	if (arquivo == NULL){
		printf("\nNao foi possivel abrir o arquivo.\n");
		return 1;
	}
	
	while ((caractere = fgetc(arquivo)) != EOF){
		putchar(caractere);
	}
	
	fclose(arquivo);
	
	return 0;
}

