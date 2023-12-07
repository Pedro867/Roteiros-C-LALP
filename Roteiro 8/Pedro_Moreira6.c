//Pedro Lucas Moreira - 25/09/23
//4 Nome-Sobrenome
#include <stdio.h>
#include <string.h>

int main (){
	char nome[4][50], sobrenome[4][50];
	int i, j;
	
	for (i = 0; i < 4; i++){
      
      printf("Digite um nome: ");
      scanf("%s", nome[i]);
      
      printf("Digite um sobrenome: ");
      scanf("%s", sobrenome[i]);
    }
    for (i = 0; i < 4; i++){
      
      printf("\n%s %s", nome[i], sobrenome[i]);
      
    }
    
	
	
	return 0;
}
