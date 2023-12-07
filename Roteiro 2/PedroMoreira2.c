#include <stdio.h>
#include <locale.h>
#include <math.h>
//Pedro lucas Moreira
//Programa para calcular o quadrade e o cubo de um número lido

int main ()
{
	int num, quadrado, cubo;

	setlocale (LC_ALL, "Portuguese");
	
	printf ("Digite um número inteiro para exibir o quadrado e o cubo do mesmo: ");
	scanf ("%d", &num);
	
	quadrado = pow (num, 2);
	cubo = pow (num, 3);
	
	printf("\nA O quadrado do número %d = %d", num, quadrado);
	printf ("\nE o cubo do número %d = %d", num, cubo);
	
	return 0;
}
