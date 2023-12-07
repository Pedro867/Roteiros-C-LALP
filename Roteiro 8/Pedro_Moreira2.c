//Pedro Lucas Moreira - 25/09/2023
//observa se a matriz 4x4 tem valores maiores que 10
#include <stdio.h>

int main()
{
    int i, j, matriz[4][4], mais10 = 0;
    
    for (i = 0; i < 4; i++){
      
      for (j = 0; j < 4; j++){
        
        printf("Valor da Matriz %d, %d: ", i, j);
        scanf("%d", &matriz[i][j]);
        if (matriz[i][j] > 10){
        	mais10++;
        }
      }
      
    }
    
    printf("\nOs numeros maiores que 10 sao: %d", mais10);
    

    return 0;
}
