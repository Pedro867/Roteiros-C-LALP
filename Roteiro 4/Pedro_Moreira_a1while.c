#include <stdio.h>

int main (){
	int multiplos = 0, num = 3;
	printf ("Os 4 primeiros multiplos de 3 sao: %d, ", num);
	multiplos++;
	
	while (multiplos <  4){
		num = num + 3;
		printf ("%d, ",num);
		multiplos ++;
	}
	
	return 0;
}
