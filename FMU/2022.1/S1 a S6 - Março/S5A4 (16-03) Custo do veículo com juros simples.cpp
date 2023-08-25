//O custo de um carro é o custo de fábrica + porcentagem do disribuidor +
// porcentagem dos impostos (os dois aplicados ao custo de fábrica, não é
// juros compostos)

#include <stdio.h>  //HEader para entradas e saídas
#include <locale.h> //Header para formatos em outras línguas

float preco;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entradas
	printf("Digite o custo de fábrica do veículo: R$");
	scanf("%f", &preco);
	
	//Cálculo
	printf("\nAdicionais cobrados do custo de fábrica:");
	printf("\nDistribuidor(+28\%), Impostos(+45\%)");

	preco = preco + (preco*0.28)+(preco*0.45);
	
	//Saída
	printf("\n\nCusto final do veículo: R$%.2f", preco);
	
	return 0;
}
