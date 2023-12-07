#include <stdio.h>

void calcularMedia(int a, int b){
	float media;
	
	media = (a + b) / 2;
	
	printf("\nA media eh: %.2f", media);
}

int main (){
	float media, num1, num2;
	printf("Digite um numero: ");
	scanf("%f", &num1);
	printf("\nDigite outro numero: ");
	scanf("%f", &num2);
	
	calcularMedia (num1, num2);

	return 0;
}
