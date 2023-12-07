#include <stdio.h>

int main (){
	float valor, soma = 0.0;
	
	while (1){
		printf("Insira o preco de um produto (ou número negativo para sair): ");
		scanf("%f", &valor);
		if (valor < 0){
			break;
		}
		soma += valor;
	}
	printf ("\nA soma dos produtos eh: %.2f", soma);
	
	return 0;
}
