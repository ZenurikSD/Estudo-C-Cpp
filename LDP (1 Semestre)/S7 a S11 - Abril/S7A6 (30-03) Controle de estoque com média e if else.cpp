#include <stdio.h> //biblioteca para usar entradas e saídas

//
// 1. Pergunte a quantidade atual, máxima e mínima do estoque
//    de açúcar (em kg) da casa.
// 2. Calcule a média
// 3. Compare a média com a quantidade atual, se a média for menor,
//	  não é necessário comprar mais.

float qtdAtu, qtdMax, qtdMin, M;

//Programa Principal
int main(){
	//Entrada de dados
	printf("Quantos kgs de acucar voce tem atualmente? ");
	scanf("%f", &qtdAtu);
	
	printf("Quantos kgs voce armazena no maximo? ");
	scanf("%f", &qtdMax);
	
	printf("E qual a quantidade minima? ");
	scanf("%f", &qtdMin);
	
	//Cálculo da média
	M = (qtdMax+qtdMin)/2;
	
	//Condicionais
	if(qtdAtu >= M){
		printf("\n");
		printf("Ja tem o suficiente (mais que a media de %.1f kg)", M);
	}
	else{
		printf("\n");
		printf("Compre mais (tem menos que a media de %.1f kg)", M);
	}
	
	//Fim
	return 0;
}
