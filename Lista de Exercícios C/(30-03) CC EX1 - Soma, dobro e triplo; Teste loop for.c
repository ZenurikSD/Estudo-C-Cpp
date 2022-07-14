// Condições compostas EX 1
//	"Faça um programa para introduzir 2 números e somá-los.
//	 Se a soma for maior que 10, calcule o dobro deste valor. 
//	 Caso a soma destes 2 números for menor que 10, calcule o triplo.

#include<stdio.h> //biblioteca para usar entradas e saídas

int N1, N2, S;

int main(){	
	// 	Pulando uns conceitos. Será que consigo usar um repetidor Para?
	// 	Parece igual ao Javascript...
	//		Para (inicio; condição; incremento) { 
	//			código condicional
	//		 }  
	// 	FUNCIONA! Mas não sei como trocar a variável de N1 pra N2 :|
	
	//	for(int i = 1; i < 3; i=i+1){
	//		printf(" Digite o %d numero: ", i);
	//		scanf ("%d", &)
	//	};
	
	//Entradas
	printf(" Digite o 1 numero: ");
	scanf ("%d", &N1);
	
	printf(" Digite o 2 numero: ");
	scanf ("%d", &N2);
	
	//Cálculos e saídas
	S = N1+N2;
	printf("\n Resultado: %d \n", S);
	
	if(S >= 10){
		S = S*2;
		printf(" Voce obteve o dobro: %d", S);
	}
	else if (S < 10){  //SeNao-Se é assim?
		S = S*3;
		printf(" Voce obteve o triplo: %d", S);
	}
		
	return 0;
}
