#include <stdio.h>

int main (){
	int num = 1;
	while (1){
		if (num % 7 == 0 && num % 9 == 0 && num % 11 == 0){
			printf("O primeiro numero divisivel por 7, 9 e 11 eh: %d", num);
			break;
		}
		num += 1;
	}
	
	return 0;
}
