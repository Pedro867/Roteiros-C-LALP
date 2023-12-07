#include <stdio.h>

int main (){
	float cm, in;
	printf ("Altura(cm)\tAltura(in)\n");
	printf("----------\t----------");
		
	for (float cm = 150 ;cm <= 190; cm += 5){
		in = cm/2.54;
		printf("\n%.2f cm\t%.2f", cm, in);
	}
	
	return 0;
}
