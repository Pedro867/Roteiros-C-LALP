#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int mes;
	
	printf ("Digite um n�mero de 1 a 12 que corresponder� a um m�s: ");
	scanf ("%d", &mes);
	switch (mes) {
		case 1:
			printf ("\nO m�s � Janeiro!");
			break;
		case 2:
			printf ("\nO m�s � Fevereiro!");
			break;
		case 3:
			printf ("\nO m�s � Mar�o!");
			break;
		case 4:
			printf ("\nO m�s � Abril!");
			break;
		case 5:
			printf ("\nO m�s � Maio!");
			break;
		case 6:
			printf ("\nO m�s � Junho!");
			break;
		case 7:
			printf ("\nO m�s � Julho!");
			break;
		case 8:
			printf ("\nO m�s � Agosto!");
			break;
		case 9:
			printf ("\nO m�s � Setembro!");
			break;
		case 10:
			printf ("\nO m�s � Outubro!");
			break;
		case 11:
			printf ("\nO m�s � Novembro!");
			break;
		case 12:
			printf ("\nO m�s � Dezembro!");
			break;
		default:
			printf("\nN�mero inv�lido!");
	}
	
	return 0;
}
