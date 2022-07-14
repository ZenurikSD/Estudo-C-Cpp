/* Crie um menu das op��es de pagamento para uma compra.
     1 - � vista: aplique um desconto de 10%
     2 - Se n�o, o valor n�o muda.
     3 - Outro: Inv�lido
*/
#include <stdio.h>
#include <locale.h>

float compra;
int pag;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Contexto e entradas
	printf(" ---- Maquininha PagBank ---- ");
	printf("\n Digite o valor da compra: R$ ");
	scanf("%f", &compra);
	
//Valida��o
if(compra>0){
	printf("\n Digite a forma de pagamento");
	printf("\n   [1] � vista (10%% desconto)");
	printf("\n   [2] � prazo");
	printf("\n   >: ");
	scanf("%d", &pag);
	
	//Formas de pagamento
	switch(pag){
		case 1:
			compra = compra-(compra*0.1); // � vista: -10%
			printf("\n Custo final: R$ %.2f", compra);
			break;
		case 2:
			printf("\n Custo final: R$ %.2f", compra);
			break;
		default:
			printf("\n Op��o inv�lida");
	}
}
else
	printf("\n Valor inv�lido");
	
	return 0;
}
