#include <stdio.h>
#include <locale.h>
//Pedro Lucas Moreira - 03/07/2023
//Programa para calcular uma circunfer�ncia

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float pi = 3.14, circun, area;
	int raio = 2;
	circun = 2 * pi * raio;
	area = pi * raio * raio;
	printf("A circunfer�ncia de um c�rculo de raio %d = %.2f", raio, circun);
	printf("\nE a �rea de um c�rculo de raio %d = %.2f", raio, area);
	return 0;
}
