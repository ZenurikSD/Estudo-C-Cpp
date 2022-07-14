/* Crie um menu das opções de pagamento para uma compra.
     1 - À vista: aplique um desconto de 10%
     2 - Se não, o valor não muda.
     3 - Outro: Inválido
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
	
//Validação
if(compra>0){
	printf("\n Digite a forma de pagamento");
	printf("\n   [1] À vista (10%% desconto)");
	printf("\n   [2] À prazo");
	printf("\n   >: ");
	scanf("%d", &pag);
	
	//Formas de pagamento
	switch(pag){
		case 1:
			compra = compra-(compra*0.1); // À vista: -10%
			printf("\n Custo final: R$ %.2f", compra);
			break;
		case 2:
			printf("\n Custo final: R$ %.2f", compra);
			break;
		default:
			printf("\n Opção inválida");
	}
}
else
	printf("\n Valor inválido");
	
	return 0;
}
