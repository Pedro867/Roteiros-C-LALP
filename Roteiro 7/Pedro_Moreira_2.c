//2) Inversão de String:
//Pedro Lucas Moreira - 04/09/2023
#include <stdio.h>
#include <string.h>

int main (){
	char str[20], aux[20];
	int cont, j;
	
	puts("Digite uma palavra:");
	gets(str);
	
	cont = strlen(str);
	printf("\n");
	
	for (j = cont; j >= 0; j--){
		printf("%c", str[j]);
	}
	
	return 0;
}
