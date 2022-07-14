//	Calcule o desconto que uma loja dará a seus clientes. 
//	O desconto é dado da seguinte forma:
//		a) Compras até R$ 100 desconto de 5%
//		b) Compras acima de R$ 101 desconto de 10%

#include <stdio.h> // biblioteca que permite usar entradas e saídas

float preco, precoD;

//Programa Principal
int main(){
	//Entrada
	printf(" Qual foi o valor da sua compra? R$ ");
	scanf ("%f", &preco);
	
	//Cálculos
	if(preco <= 100){
		precoD = preco * 0.95;
	}
	else if (preco >= 101){
		precoD = preco * 0.9;
	};
	
	//Saída	
	printf("\n Desconto aplicado \n");
	printf(" Preco final R$%.2f", precoD);
	
	return 0;
}
