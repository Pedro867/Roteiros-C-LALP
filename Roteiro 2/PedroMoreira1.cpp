#include <stdio.h>
#include <locale.h>
#include <math.h>
//Pedro lucas Moreira
//Programa para calcular a raiz quadrada de um número lido

int main ()
{
	int num;
	float raiz;

	setlocale (LC_ALL, "Portuguese");
	
	printf ("Digite um número inteiro para exibir a raiz quadrada: ");
	scanf ("%d", &num);
	
	raiz = sqrt (num);
	
	printf("\nA raiz quadrada do número %d = %.2f", num, raiz);
	
	return 0;
}
