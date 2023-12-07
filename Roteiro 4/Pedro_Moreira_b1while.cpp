#include <stdio.h>

int main (){
	int const senha = 1234;
	int tent, controle = 0;
	
	while (controle == 0){
		printf ("A senha contem 4 algarismos. Faca uma tentativa: ");
		scanf ("%d", &tent);
			if (senha == tent){
				printf("\nAcesso Concedido!");
				controle = 1;
				break;
			}
			else {
				printf ("Senha incorreta! Tente novamente: ");
				scanf ("%d", &tent);
			}
	}
	
	
	return 0;
}
