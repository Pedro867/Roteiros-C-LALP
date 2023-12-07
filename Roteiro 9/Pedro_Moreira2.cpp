#include <stdio.h>

void trocaValoresPorValor (int a, int b, int c){
	
	c = a;
	a = b;
	b = c;
	
}

void trocaValoresPorReferencia (int *a, int *b, int *c){
	
	*c = *a;
	*a = *b;
	*b = *c;
	
}

int main (){
	int var1, var2, troca;
	
	printf("Digite um numero: ");
	scanf("%d", &var1);
	printf("Digite outro numero: ");
	scanf("%d", &var2);
	
	printf("Antes da troca: var1 = %d ; var2 = %d", var1, var2);
	
	trocaValoresPorValor (var1, var2, troca);
	
	printf("\nDepois da troca: var1 = %d ; var2 = %d", var1, var2);
	
	printf("\n\nAgora, vamos observar o processo com a Passagem por Referencia!\n\n");
	
	printf("Digite um numero: ");
	scanf("%d", &var1);
	printf("Digite outro numero: ");
	scanf("%d", &var2);
	
	printf("Antes da troca: var1 = %d ; var2 = %d", var1, var2);
	
	trocaValoresPorReferencia (&var1, &var2, &troca);
	
	printf("\nDepois da troca: var1 = %d ; var2 = %d", var1, var2);
	
	return 0;
}
