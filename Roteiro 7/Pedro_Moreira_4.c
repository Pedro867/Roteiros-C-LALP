//4) Contagem de Vogais
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main()
{
    char pal[100];
    int tam, vogais = 0;
  
    printf("Oi! Seja bem-vindo\nDigite uma frase e iremos ver quantas vogais tem: ");
    fgets(pal, 100, stdin);
    tam = strlen(pal) - 1;// -1 pelo delimitador
    
    for (int i = 0; i <= tam - 1 ;i++){
      
      if (pal[i] == 'A' || pal[i] ==  'E' || pal[i] == 'I' || pal[i] == 'O' || pal[i] == 'U'){
        vogais++;
        continue;
      }
      else if (pal[i] == 'a' || pal[i] == 'e' || pal[i] == 'i' || pal[i] == 'o' || pal[i] == 'u'){
        vogais++;
        continue;
      }
    
    }
    
    printf("\n\nA frase %s tem %d Vogais!", pal,vogais);

    return 0;
}

