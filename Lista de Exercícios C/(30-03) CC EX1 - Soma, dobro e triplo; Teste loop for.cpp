// Condi��es compostas EX 1
//	"Fa�a um programa para introduzir 2 n�meros e som�-los.
//	 Se a soma for maior que 10, calcule o dobro deste valor. 
//	 Caso a soma destes 2 n�meros for menor que 10, calcule o triplo.

#include<stdio.h> //biblioteca para usar entradas e sa�das

int N1, N2, S;

int main(){	
	// 	Pulando uns conceitos. Ser� que consigo usar um repetidor Para?
	// 	Parece igual ao Javascript...
	//		Para (inicio; condi��o; incremento) { 
	//			c�digo condicional
	//		 }  
	// 	FUNCIONA! Mas n�o sei como trocar a vari�vel de N1 pra N2 :|
	
	//	for(int i = 1; i < 3; i=i+1){
	//		printf(" Digite o %d numero: ", i);
	//		scanf ("%d", &)
	//	};
	
	//Entradas
	printf(" Digite o 1 numero: ");
	scanf ("%d", &N1);
	
	printf(" Digite o 2 numero: ");
	scanf ("%d", &N2);
	
	//C�lculos e sa�das
	S = N1+N2;
	printf("\n Resultado: %d \n", S);
	
	if(S >= 10){
		S = S*2;
		printf(" Voce obteve o dobro: %d", S);
	}
	else if (S < 10){  //SeNao-Se � assim?
		S = S*3;
		printf(" Voce obteve o triplo: %d", S);
	}
		
	return 0;
}
