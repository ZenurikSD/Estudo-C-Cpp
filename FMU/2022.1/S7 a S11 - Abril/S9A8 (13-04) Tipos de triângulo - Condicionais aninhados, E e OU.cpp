/* Exercício de triângulos
- Leia os valores de três lados de um triângulo e diga qual o tipo:
	- 3 lados iguais: Equilátero
	- 2 Lados iguals: Isósceles
	- Todos lados diferentes: Escaleno

Lógica
	Se (L1 == L2 e L2 == L3)
		equiláterio
	SeNão Se (L1 == L2 ou L2 == L3 ou L1==L3)
		isósceles
	SeNão Se (L1 != L2 e L2 != L3)
		escaleno
	FimSe(3vzs) Isso tá meio fácil demais, estou desconfiado..
*/

#include <stdio.h> //HEADER que permite usar entradas e saídas
#include <locale.h> //Habilita caracteres diferentes

//Variáveis
float A, B, C;

//Execução Principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entradas
	//DÁ PRA FAZER EM UM PEDIDO SÓ!
	printf("Digite os lados do triângulo: \n");
	scanf("%f %f %f", &A, &B, &C);
	
	
	/*Condição composta com operadores lógicos
	  Primeiro testa se é um triângulo ou não:
	  A soma de dois lados tem que ser maior que o terceiro */
	if(A+B>C && B+C>A && C+A>B){
		
		if(A==B && B==C){
			printf("\nVocê tem um triângulo equilátero");
		}
		else if(A==B || B==C || A==C){
			printf("\nVocê tem um triângulo isósceles");
		}
		else if(A!=B && B!=C){
			printf("\nVocê tem um triângulo escaleno");
		}
	}
	else {
		printf("\nIsso não forma um triângulo");
	};
	
	//Saída
	return 0;
}



