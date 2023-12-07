#include <stdio.h>
#define max 2

int main (){
	float compra[max], venda[max];
	int l10 = 0, lmed = 0, l20 = 0;
	
	for (int i = 0; i < max; i++){
		printf("Digite o preco de compra da mercadoria %d: ", i + 1);
		scanf("%f", &compra[i]);
		printf("Digite o preco de venda da mercadoria %d: ", i + 1);
		scanf("%f", &venda[i]);
		printf("*****************************************\n");
	}
	
	for (int i = 0; i < max; i++){
	    
	    if ( (compra[i]*20)/100 < venda[i] - compra[i] )
	    {
	        l20++;
	    }
	    else if ( (compra[i]*10)/100 > venda[i] - compra[i] )
	    {
	        l10++;
	    }else 
	    {
	        lmed++;
	    }
	}
	
	printf("\nResultados:\n");
	printf("Mercadorias com lucro < 10 porcento: %d\n", l10);
	printf("Mercadorias com lucro entre 10 e 20 porcento: %d\n", lmed);
	printf("Mercadorias com lucro > 20 porcento: %d", l20);
	
	return 0;
}

