#include <stdio.h>

int main (){
	int multiplos = 1, num = 3;
	do {
		printf ("O %d numero multiplo de 3 eh: %d\n", multiplos, num);
		num = num + 3;
		multiplos ++;
	} while (multiplos <= 4);
	
	return 0;
}
