#include <stdio.h>
#include <locale.h>
#include <math.h>
//Pedro lucas Moreira
//Programa para arredondar um valor para o mais próximo

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
	double num = 125.12225888, numeroArredond;
	
	numeroArredond = round(num);
	
	printf ("O número %.8f arredondado = %.1f", num, numeroArredond);
	
	return 0;
}
