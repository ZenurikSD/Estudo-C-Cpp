#include <stdio.h> //biblioteca para entradas e saídas
//Condições compostas:
//  "As maçãs custam R$ 1,30 cada se comprar menos de uma dúzia
//	 e R$ 1 se comprar ao menos 12."

// 1. Leia o número de maçãs
// 2. Calcule o preço condicional
// 3. Mostre o total da compra

int 	qtdMacas;
float 	preco;

//Programa Principal
int main(){
	//entrada
	printf("Quantas macas você ira comprar? ");
	scanf("%d", &qtdMacas);
	
	printf("\n"); //pula a linha
	
	//Condicional
	if (qtdMacas < 12){
		preco = qtdMacas * 1;  //preço com desconto
	}
	else {
		preco = qtdMacas * 1.3;  //preço SEM desconto
	}
	
	//Saída
	printf("\n");
	printf(" %d macas vao custar R$ %.2f",qtdMacas, preco);
		
	return 0;
}

