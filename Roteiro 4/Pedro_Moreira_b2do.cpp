#include <stdio.h>

int main (){
	float cm = 150, in;
	printf ("Altura(cm)\tAltura(in)\n");
	printf("----------\t----------");
		
	do{
		in = cm/2.54;
		printf("\n%.2f cm\t%.2f", cm, in);
		cm += 5;
	}while (cm <= 190);
	
	return 0;
}
