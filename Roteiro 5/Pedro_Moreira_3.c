#include <stdio.h>

int main (){
	int nota, soma = 0, cont = 0;
	float media;
	while (1){
		printf("Insira uma nota de prova (para sair digite um número negativo ou maior que 10): ");	
		scanf("%d", &nota);
		if (nota < 0 || nota > 10){
			break;
		}
		soma += nota;
		cont += 1;
	}
	media = soma / cont;
	printf ("\nA média das notas eh %.2f",media);
	
	return 0;
}
