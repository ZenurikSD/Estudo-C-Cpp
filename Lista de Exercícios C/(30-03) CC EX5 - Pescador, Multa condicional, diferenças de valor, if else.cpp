// PDF Condi��es compostas EX 5
// Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para 
// controlar o rendimento di�rio de seu trabalho. Toda vez que ele traz 
// um peso de peixes maior que o estabelecido pelo regulamento de pesca
// do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$ 4,00 
// por quilo excedente. Jo�o precisa que voc� fa�a um programa que leia 
// a vari�vel peso (peso de peixes) e calcule o excesso. Gravar na 
// vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel 
// multa o valor da multa que Jo�o dever� pagar. 
// Imprima os dados do programa com as mensagens adequadas.

#include<stdio.h> //biblioteca para usar Inputs e Outputs

float pesoP, excesso, multa;

//Programa Principal
int main(){
	//Entrada
	printf("Quantos quilos de peixe voce pescou? ");
	scanf ("%f", &pesoP);
	
	//C�lculo
	// Pseudoc�digo:
	//	Se pesoPeixe > 50kg entao
	//		multa <- R$ 4 * qtdExcesso
	//	FimSe
	excesso = 0;
	if (pesoP > 50){
		excesso = pesoP - 50;
		multa = 4 * excesso;
	}
	
	//Sa�das -adequadas-
	// diferente � !=
	if (excesso != 0){
		printf("\n Peso acima de 50kg! Multa sera aplicada \n");
		printf(" Qtd excedente: %.2f kg", excesso);
		printf("\n Multa: R$%.2f", multa);
	}
	else{
		printf("\n Peso dentro do estabelecido (50kg) \n");
	};
	
	return 0;
}



