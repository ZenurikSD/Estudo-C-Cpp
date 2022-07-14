/* Ex4 Estrutura condicional:
 Autenticaùùo ùnica. A senha ù 4531, mostre uma mensagem de permissùo de acesso
*/

#include <stdio.h>
#include <locale.h> //O cafù com pùo e margarina do C
#include <stdlib.h>

//Vars
int senha;

//Execuùùo principal
/* Vou tentar usar um repetidor "Repita-atù", apagando a tela e pedindo nova-
	mente a senha se nùo acertar */
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// Faùa{entrada de senha} enquanto(senha errada)
	do{
		system("cls"); //nùo se acostuma com essa funùùo. ù uma dor de cabeùa.
		printf("Insira a senha: ");
		scanf("%d", &senha);
	}
	while (senha != 4531);
	
	printf("\nVocù foi autenticado. Seja bem vindo!");
	
	return 0;
}
