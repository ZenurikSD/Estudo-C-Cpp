#include <stdio.h> //biblioteca para usar entradas e sa�das

//
// 1. Pergunte a quantidade atual, m�xima e m�nima do estoque
//    de a��car (em kg) da casa.
// 2. Calcule a m�dia
// 3. Compare a m�dia com a quantidade atual, se a m�dia for menor,
//	  n�o � necess�rio comprar mais.

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
	
	//C�lculo da m�dia
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
