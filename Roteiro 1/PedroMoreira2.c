#include <stdio.h>
#include <locale.h>
//Pedro Lucas Moreira - 03/07/2023
//Programa para a área de um retângulo

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int base = 2, altura = 3, area;
	area = base * altura;
	printf("A área de um retângulo de base %d e altura %d = %d", base, altura, area);
	return 0;
}
