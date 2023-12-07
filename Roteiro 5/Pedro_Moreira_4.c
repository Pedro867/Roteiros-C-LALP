#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int tentativa(int a, int b){
	do {
		printf("\nFaça uma tentativa (insira um número de 1 a 6 ou digite 0 para encerrar): ");
		scanf("%d", &a);
		if (a > 6){
			printf ("\nO número inserido está fora dos parâmetros!\n\n");
			continue;
		}
		if (a == b){
			printf("\nVocê Acertou! Parabéns!!\n");
			break;
		}
	} while (a != 0);
}

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int numAleatorio, tent;
	
	srand(time(NULL));
	numAleatorio = rand() % 5 + 1;
	printf("Seja bem vindo ao Advinhador de Dado!\n");
	printf("Um dado de 6 lados foi lançado, e seu trabalho é acertar a face voltada para cima!\n");
	
	tentativa (tent, numAleatorio);
	
	printf("\nO número correto era %d!", numAleatorio);
	
	return 0;
}
