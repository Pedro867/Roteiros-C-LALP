#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int mes;
	
	printf ("Digite um número de 1 a 12 que corresponderá a um mês: ");
	scanf ("%d", &mes);
	switch (mes) {
		case 1:
			printf ("\nO mês é Janeiro!");
			break;
		case 2:
			printf ("\nO mês é Fevereiro!");
			break;
		case 3:
			printf ("\nO mês é Março!");
			break;
		case 4:
			printf ("\nO mês é Abril!");
			break;
		case 5:
			printf ("\nO mês é Maio!");
			break;
		case 6:
			printf ("\nO mês é Junho!");
			break;
		case 7:
			printf ("\nO mês é Julho!");
			break;
		case 8:
			printf ("\nO mês é Agosto!");
			break;
		case 9:
			printf ("\nO mês é Setembro!");
			break;
		case 10:
			printf ("\nO mês é Outubro!");
			break;
		case 11:
			printf ("\nO mês é Novembro!");
			break;
		case 12:
			printf ("\nO mês é Dezembro!");
			break;
		default:
			printf("\nNúmero inválido!");
	}
	
	return 0;
}
