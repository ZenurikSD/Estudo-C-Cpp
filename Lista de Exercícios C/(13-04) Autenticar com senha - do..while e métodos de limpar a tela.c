/* Ex4 Estrutura condicional:
 Autentica��o �nica. A senha � 4531, mostre uma mensagem de permiss�o de acesso
*/

#include <stdio.h>
#include <locale.h> //O caf� com p�o e margarina do C
#include <stdlib.h>

//Vars
int senha;

//Execu��o principal
/* Vou tentar usar um repetidor "Repita-at�", apagando a tela e pedindo nova-
	mente a senha se n�o acertar */
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// Fa�a{entrada de senha} enquanto(senha errada)
	do{
		system("cls"); //n�o se acostuma com essa fun��o. � uma dor de cabe�a.
		printf("Insira a senha: ");
		scanf("%d", &senha);
	}
	while (senha != 4531);
	
	printf("\nVoc� foi autenticado. Seja bem vindo!");
	
	return 0;
}
