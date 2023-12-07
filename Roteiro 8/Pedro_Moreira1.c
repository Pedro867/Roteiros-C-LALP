//Pedro Lucas Moreira - 25/09/2023
//Matriz atruibuicao direta
#include <stdio.h>

int main()
{
    int i, j, matriz[4][4] = {
      {1,2,3,4},
      {5,6,7,8},
      {8,7,6,5},
      {4,3,2,1},      
    };
    
    printf("\n\tMatriz Tabulada:\n");
    
    for (i = 0; i < 4; i++){
      
      for (j = 0; j < 4; j++){
        
        printf("%d\t",matriz[i][j]);
        
      }
      
      printf("\n");
    }
    

    return 0;
}

