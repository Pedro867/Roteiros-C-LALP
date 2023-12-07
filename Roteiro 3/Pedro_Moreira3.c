#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int num, i, div = 0;
	
	printf("Digite um número inteiro para verificar se é primo ou não: ");
	scanf ("%d", &num);
	
	for (i = 2; i <= num/2; i++){
		if (num % i == 0){
			div++;
			break;
		}
	}
	if (div == 0){
		printf("\n%d é primo!", num);
	}
	else{
		printf("\n%d não é primo!", num);
	}
	return 0;
}
