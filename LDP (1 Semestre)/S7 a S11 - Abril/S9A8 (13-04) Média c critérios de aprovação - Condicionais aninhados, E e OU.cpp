#include <stdio.h> //HEADER para utilizar entradas e saídas
#include <locale.h>

/* Média com condições de aprovação
   Receba 2 notas e tire a média:
	- Aprovado:			>= 7 e <= 10
	- Retido p/ exame: 	>= 3 e <7
	- Reprovado: 		>= 0 e <3
*/

float N1, N2, M;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite as duas notas: \n");
	scanf("%f %f", &N1, &N2);
	
		
	
	//Impedir o erro: Só testa no intervalo entre [0-10]
	if(N1>=0 && N1<=10 && N2>=0 && N2<=10){
		
		M=(N1+N2)/2;
		printf("\nMédia: %.2f", M);
		
		if(M>=7 && M<=10){
			printf("\nAluno aprovado");
			}
			else if(M>=3 && M<7){
				printf("\nAluno retido para exame");
				}
				else if(M>=0 && M<3){
					printf("\nAluno reprovado");
					}
	}
	else{
		printf("\nVocê não inseriu notas válidas");
	}
	
	return 0;
}
