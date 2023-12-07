#include <stdio.h>
#define max 5

int main (){
	int vetor1 [max], vetor2 [max], vetorSoma[max];
	printf("Digite 5 valores inteiros para o vetor 1:\n");
	
	for (int i = 0; i < max; i++){
		scanf("%d", &vetor1[i]);
	}	
	
	printf("\n\nAgora, digite 5 valores inteiros para o vetor 2:\n");
	
	for (int i = 0; i < max; i++){
		scanf("%d", &vetor2[i]);
	}
	
	printf("\n\nPronto! Agora vamos somar cada valor atribuido nos vetores com seu correspondente:\n");
	
	for (int i = 0; i < max; i++){
		vetorSoma[i] = vetor1[i] + vetor2[i];
		printf ("\nA soma dos vetores com posicao %d eh %d",i ,vetorSoma[i] );
	}
	
	return 0;
}
