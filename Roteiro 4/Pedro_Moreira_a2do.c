#include <stdio.h>

int main (){
	float fahrenheit = 40, celcius, i = 40;
	do{
		celcius = (fahrenheit - 32)/1.8;
		printf("Valor em C = %.2f ; Valor em F = %.0f\n", celcius, fahrenheit);
		fahrenheit ++;
		i++;
	} while (i <= 70);
	
	return 0;
}
