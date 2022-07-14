//O custo de um carro � o custo de f�brica + porcentagem do disribuidor +
// porcentagem dos impostos (os dois aplicados ao custo de f�brica, n�o �
// juros compostos)

#include <stdio.h>  //HEader para entradas e sa�das
#include <locale.h> //Header para formatos em outras l�nguas

float preco;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entradas
	printf("Digite o custo de f�brica do ve�culo: R$");
	scanf("%f", &preco);
	
	//C�lculo
	printf("\nAdicionais cobrados do custo de f�brica:");
	printf("\nDistribuidor(+28\%), Impostos(+45\%)");

	preco = preco + (preco*0.28)+(preco*0.45);
	
	//Sa�da
	printf("\n\nCusto final do ve�culo: R$%.2f", preco);
	
	return 0;
}
