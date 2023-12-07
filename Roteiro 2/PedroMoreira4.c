#include <stdio.h>
#include <locale.h>
#include <math.h>
//Pedro lucas Moreira
//Programa para exibir a altura e idade inseridas pelo usuário

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	int idade;
	float altura;
	
	printf ("Digite sua altura: ");
	scanf ("%f", &altura);
	printf ("Digite sua idade: ");
	scanf ("%d", &idade);
	
	printf ("\nSua altura é %.2f e sua idade é %d.", altura, idade);
	
	return 0;
}
