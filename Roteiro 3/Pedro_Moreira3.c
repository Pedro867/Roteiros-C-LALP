#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int num, i, div = 0;
	
	printf("Digite um n�mero inteiro para verificar se � primo ou n�o: ");
	scanf ("%d", &num);
	
	for (i = 2; i <= num/2; i++){
		if (num % i == 0){
			div++;
			break;
		}
	}
	if (div == 0){
		printf("\n%d � primo!", num);
	}
	else{
		printf("\n%d n�o � primo!", num);
	}
	return 0;
}
