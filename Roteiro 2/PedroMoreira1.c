#include <stdio.h>
#include <locale.h>
#include <math.h>
//Pedro lucas Moreira
//Programa para calcular a raiz quadrada de um n�mero lido

int main ()
{
	int num;
	float raiz;

	setlocale (LC_ALL, "Portuguese");
	
	printf ("Digite um n�mero inteiro para exibir a raiz quadrada: ");
	scanf ("%d", &num);
	
	raiz = sqrt (num);
	
	printf("\nA raiz quadrada do n�mero %d = %.2f", num, raiz);
	
	return 0;
}
