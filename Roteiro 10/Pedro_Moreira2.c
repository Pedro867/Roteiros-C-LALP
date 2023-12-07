//Pedro Lucas Moreira 16/10/2023
//Struct carro
#include <stdio.h>
#include <string.h>

struct Carro {
		float preco;
		char marca[50];
		int ano;
	};

int main (){	
	struct Carro carro1;
	
	strcpy(carro1.marca, "Ferrari");
	carro1.ano = 2023;
	carro1.preco = 300000.00;
	
	printf("Marca: %s\n", carro1.marca);
	printf("Ano: %d\n", carro1.ano);
	printf("Preco: %.2f", carro1.preco);
	
	return 0;
}
