#include <stdio.h>
#include <locale.h>
//Pedro Lucas Moreira - 03/07/2023
//Programa para calcular o desconto de um produto

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float valor, desconto, total, porcent;
	valor = 100.00;
	porcent = 5.00;
	desconto = valor / 100 * porcent;
	total = valor - desconto;
	
	printf("Valor do produto = %.2f", valor);
	printf("\nDesconto obtido = %.2f", desconto);
	printf("\nValor a ser pago = %.2f", total);
	printf("\nPorcentagem de desconto = %.2f", porcent);
	return 0;
}
