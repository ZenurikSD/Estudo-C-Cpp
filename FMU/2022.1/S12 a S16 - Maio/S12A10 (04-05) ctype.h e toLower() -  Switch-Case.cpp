#include <stdio.h>
#include <locale.h>
#include <ctype.h> //Fun��es para manipula��o de caracteres (tolower, isalpha)

//Pe�a ao usu�rio digitar uma letra min�scula e verifique se � vogal ou consoante
char letra;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma letra min�scula: ");
	scanf(" %c", &letra);
	
	letra = toupper(letra); //Para min�sculo
	
	//Testa se o caractere � alfab�tico
	if (isalpha(letra)) { 
	
		switch (letra){  //M�ltiplos testes (OU)
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("\n '%c' � uma vogal", letra);
				break;
			default:
				printf("\n '%c' � uma consoante.", letra);
		}
	}
	else
		printf("\n Isso n�o � uma letra. Volta pra 1� s�rie.");
		
	return 0;
}
