#include <stdio.h>

void elevarAoQuadradoPorValor (int a, int b){
	
	b = a * a;
	
}

void elevarAoQuadradoPorReferencia (int *a, int *b){
	
	*b = *a * *a;
	
}

int main (){
	int num, quadrado;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	elevarAoQuadradoPorValor (num, quadrado);
	
	printf("\nValor original: %d ; Valor ao quadrado: %d",  num, quadrado);
	
	printf("\n\nAgora, vamos observar o processo com a Passagem por Referencia!\n\n");
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	elevarAoQuadradoPorReferencia (&num, &quadrado);
	
	printf("\nValor original: %d ; Valor ao quadrado: %d",  num, quadrado);
	
	return 0;
}
