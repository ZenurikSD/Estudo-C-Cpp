//	Calcule o desconto que uma loja dar� a seus clientes. 
//	O desconto � dado da seguinte forma:
//		a) Compras at� R$ 100 desconto de 5%
//		b) Compras acima de R$ 101 desconto de 10%

#include <stdio.h> // biblioteca que permite usar entradas e sa�das

float preco, precoD;

//Programa Principal
int main(){
	//Entrada
	printf(" Qual foi o valor da sua compra? R$ ");
	scanf ("%f", &preco);
	
	//C�lculos
	if(preco <= 100){
		precoD = preco * 0.95;
	}
	else if (preco >= 101){
		precoD = preco * 0.9;
	};
	
	//Sa�da	
	printf("\n Desconto aplicado \n");
	printf(" Preco final R$%.2f", precoD);
	
	return 0;
}
