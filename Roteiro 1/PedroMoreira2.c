#include <stdio.h>
#include <locale.h>
//Pedro Lucas Moreira - 03/07/2023
//Programa para a �rea de um ret�ngulo

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int base = 2, altura = 3, area;
	area = base * altura;
	printf("A �rea de um ret�ngulo de base %d e altura %d = %d", base, altura, area);
	return 0;
}
