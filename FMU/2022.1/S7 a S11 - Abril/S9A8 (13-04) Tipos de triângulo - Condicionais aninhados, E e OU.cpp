/* Exerc�cio de tri�ngulos
- Leia os valores de tr�s lados de um tri�ngulo e diga qual o tipo:
	- 3 lados iguais: Equil�tero
	- 2 Lados iguals: Is�sceles
	- Todos lados diferentes: Escaleno

L�gica
	Se (L1 == L2 e L2 == L3)
		equil�terio
	SeN�o Se (L1 == L2 ou L2 == L3 ou L1==L3)
		is�sceles
	SeN�o Se (L1 != L2 e L2 != L3)
		escaleno
	FimSe(3vzs) Isso t� meio f�cil demais, estou desconfiado..
*/

#include <stdio.h> //HEADER que permite usar entradas e sa�das
#include <locale.h> //Habilita caracteres diferentes

//Vari�veis
float A, B, C;

//Execu��o Principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entradas
	//D� PRA FAZER EM UM PEDIDO S�!
	printf("Digite os lados do tri�ngulo: \n");
	scanf("%f %f %f", &A, &B, &C);
	
	
	/*Condi��o composta com operadores l�gicos
	  Primeiro testa se � um tri�ngulo ou n�o:
	  A soma de dois lados tem que ser maior que o terceiro */
	if(A+B>C && B+C>A && C+A>B){
		
		if(A==B && B==C){
			printf("\nVoc� tem um tri�ngulo equil�tero");
		}
		else if(A==B || B==C || A==C){
			printf("\nVoc� tem um tri�ngulo is�sceles");
		}
		else if(A!=B && B!=C){
			printf("\nVoc� tem um tri�ngulo escaleno");
		}
	}
	else {
		printf("\nIsso n�o forma um tri�ngulo");
	};
	
	//Sa�da
	return 0;
}



