#include <stdio.h>

int main (){
	float fahrenheit = 40, celcius;
	for (int i = 40; i <= 70; i++){
		celcius = (fahrenheit - 32)/1.8;
		printf("Valor em C = %.2f ; Valor em F = %.0f\n", celcius, fahrenheit);
		fahrenheit ++;
	}
	
	
	return 0;
}
