#include <stdio.h>
#include <string.h>

int main (){
	const char senha [] = "senha123";
	char tent [20];
	int retorno;
	
	printf ("Digite a Senha: ");
	scanf ("%s", tent);

	retorno = strcmp(tent, senha);

	if (retorno == 0){
		printf ("\nAcesso Concedido.");
	}
	else{
		printf("\nAcesso Negado.");
	}
	
	return 0;
}
