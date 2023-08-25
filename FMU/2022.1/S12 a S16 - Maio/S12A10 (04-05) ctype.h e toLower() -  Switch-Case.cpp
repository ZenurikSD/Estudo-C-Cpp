#include <stdio.h>
#include <locale.h>
#include <ctype.h> //Funções para manipulação de caracteres (tolower, isalpha)

//Peça ao usuário digitar uma letra miníscula e verifique se é vogal ou consoante
char letra;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma letra minúscula: ");
	scanf(" %c", &letra);
	
	letra = toupper(letra); //Para minúsculo
	
	//Testa se o caractere é alfabético
	if (isalpha(letra)) { 
	
		switch (letra){  //Múltiplos testes (OU)
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				printf("\n '%c' é uma vogal", letra);
				break;
			default:
				printf("\n '%c' é uma consoante.", letra);
		}
	}
	else
		printf("\n Isso não é uma letra. Volta pra 1ª série.");
		
	return 0;
}
