#include <stdio.h> //biblioteca para entradas e sa�das
//Condi��es compostas:
//  "As ma��s custam R$ 1,30 cada se comprar menos de uma d�zia
//	 e R$ 1 se comprar ao menos 12."

// 1. Leia o n�mero de ma��s
// 2. Calcule o pre�o condicional
// 3. Mostre o total da compra

int 	qtdMacas;
float 	preco;

//Programa Principal
int main(){
	printf("Quantas macas voc� ira comprar? ");
	scanf("%d", &qtdMacas);
	
	printf("\n"); //pula a linha
	
	//Condicional
	if (qtdMacas < 12){
		preco = qtdMacas * 1;  //pre�o com desconto
		
		//Sa�da
		printf("%d macas vao custar R$ %.2f",qtdMacas, preco);
		printf("Preco unitario: R$ 1");
	}
	else {
		preco = qtdMacas * 1.3;  //pre�o com desconto
		
		//Sa�da
		printf("%d macas vao custar R$ %.2f",qtdMacas, preco);
		printf("Preco unitario: R$ 1,3");
	}
	
	return 0;
}

