//Pedro Lucas Moreira 16/10/2023
//Struct array carro
#include <stdio.h>

struct Carro {
		float preco;
		char marca[50];
		int ano;
	};

int main (){	
	struct Carro carros[5];
	
	for (int i = 0; i < 5; i ++){
		printf("Digite a marca do carro %d: ", i+1);
		scanf("%s", carros[i].marca);
		printf("Digite o ano do carro %d: ", i+1);
		scanf("%f", &carros[i].ano);
		printf("Digite o preco do carro %d: ", i+1);
		scanf("%f", &carros[i].preco);
	}
	printf("\n\n");
	
	for (int i = 0; i < 5; i++){
		printf("Carro: %d\n", i+1);
		printf("Marca: %s\n", carros[i].marca);
		printf("Ano: %d\n", carros[i].ano);
		printf("Preco: %.2f\n\n", carros[i].preco);
	}
	
	return 0;
}
