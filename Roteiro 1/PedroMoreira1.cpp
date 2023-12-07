#include <stdio.h>
#include <locale.h>
//Pedro Lucas Moreira - 03/07/2023
//Programa para calcular média aritmética de três notas
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1 = 6.5, nota2 = 9.7, nota3 = 2.5, soma, media;
	soma = nota1 + nota2 + nota3;
	media = soma/3;
	printf ("A soma dos números %.1f, %.1f e %.1f = = %.2f", nota1, nota2, nota3, soma);
	printf ("\nA média dos números %.1f, %.1f e %.1f = %.2f", nota1, nota2, nota3, media);
	return 0;
}
