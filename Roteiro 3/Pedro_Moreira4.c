#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	int tent, num, num2, chances = 0;
	
	printf ("Seja bem vindo ao Jogo da Advinha��o!\nTente um n�mero para advinhar: ");
	scanf ("%d", &tent);
	num2 = rand ();
	
	while (chances <= 15){
	if (tent == num2){
		chances = 16;
		break;
	}
	else if (tent < num2){
		printf ("\nO n�mero � maior que %d!", tent);
	}
	else {
		printf("\nO n�mero � menor que %d!", tent);
	}
	chances ++;
	printf ("\nTente outro n�mero: ");
	scanf ("%d", &tent);
	}
	printf ("\nVoc� Venceu! Parab�ns!");
	return 0;
}
