#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "Portuguese");
	char letra;
	
	printf ("Digite uma letra para ver se � vogal ou consoante: ");
	scanf("%c", &letra);
	switch (letra){
		case 'A':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'a':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'E':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'e':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'I':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'i':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'O':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'o':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'U':
			printf("\n%c � uma Vogal!", letra);
			break;
		case 'u':
			printf("\n%c � uma Vogal!", letra);
			break;
		default:
			printf("\n%c � uma consoante!", letra);
	}
	
	return 0;
}
