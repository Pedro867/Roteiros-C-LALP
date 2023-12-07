//Pedro Lucas Moreira - 25/09/2023
//Soma de matrizes
#include <stdio.h>

int main()
{
    int i, j, m1[3][3], m2[3][3], mSoma[3][3];
    
    for (i = 0; i < 3; i++){
      
      for (j = 0; j < 3; j++){
        
        printf("Valor da primeira Matriz %d, %d: ", i, j);//lendo valores da m1
        scanf("%d", &m1[i][j]);
        
      }
      
    }
    
    for (i = 0; i < 3; i++){
      
      for (j = 0; j < 3; j++){
        
        printf("Valor da segunda Matriz %d, %d: ", i, j);//lendo valores da m2
        scanf("%d", &m2[i][j]);
        
      }
      
    }
    
    printf("\nResultados da soma da primeira matriz com a segunda:\n");
    
    for (i = 0; i < 3; i++){
      
      for (j = 0; j < 3; j++){
        
        mSoma[i][j] = m1[i][j]+m2[i][j];
        printf("%d\t", mSoma[i][j]);
        
      }
      printf("\n");
    }

    return 0;
}
