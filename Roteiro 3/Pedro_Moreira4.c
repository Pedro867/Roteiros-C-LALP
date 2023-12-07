#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int tent, num, num2, chances = 0;
	
	printf ("Seja bem vindo ao Jogo da Advinhação!\nTente um número para advinhar: ");
	scanf ("%d", &tent);
	num2 = rand ();
	
	while (chances <= 15){
	if (tent == num2){
		chances = 16;
		break;
	}
	else if (tent < num2){
		printf ("\nO número é maior que %d!", tent);
	}
	else {
		printf("\nO número é menor que %d!", tent);
	}
	chances ++;
	printf ("\nTente outro número: ");
	scanf ("%d", &tent);
	}
	printf ("\nVocê Venceu! Parabéns!");
	return 0;
}
