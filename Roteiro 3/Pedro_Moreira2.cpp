#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	char letra;
	
	printf ("Digite uma letra para ver se é vogal ou consoante: ");
	scanf("%c", &letra);
	switch (letra){
		case 'A':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'a':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'E':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'e':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'I':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'i':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'O':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'o':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'U':
			printf("\n%c é uma Vogal!", letra);
			break;
		case 'u':
			printf("\n%c é uma Vogal!", letra);
			break;
		default:
			printf("\n%c é uma consoante!", letra);
	}
	
	return 0;
}
