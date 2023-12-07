//Pedro Lucas Moreira - 25/09/2023
//Inserir 4 nomes
#include <stdio.h>

int main()
{
    char nome[4][50];
    int i, j;
    
    for (i = 0; i < 4; i++){
      
      printf("Digite um nome: ");
      scanf("%s", nome[i]);
      
    }
    
    printf("\n");
    
    for (i = 0; i < 4; i++){
    	printf("%s\n", nome[i]);
    }

    return 0;
}

