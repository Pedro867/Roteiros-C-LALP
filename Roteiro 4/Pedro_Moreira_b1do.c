#include <stdio.h>

int main (){
	int const senha = 1234;
	int tent, controle = 0;
	
	do {
		printf ("A senha contem 4 algarismos. Faca uma tentativa: ");
		scanf ("%d", &tent);
			if (senha == tent){
				printf ("\nAcesso Concedido!");
				controle = 1;
			}
			else{
				printf ("Senha incorreta! Tente novamente.\n");
			}
	} while (controle == 0);
	
	return 0;
}
