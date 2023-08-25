#include <stdio.h> //HEADER para utilizar entradas e sa�das
#include <locale.h>

/* M�dia com condi��es de aprova��o
   Receba 2 notas e tire a m�dia:
	- Aprovado:			>= 7 e <= 10
	- Retido p/ exame: 	>= 3 e <7
	- Reprovado: 		>= 0 e <3
*/

float N1, N2, M;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite as duas notas: \n");
	scanf("%f %f", &N1, &N2);
	
		
	
	//Impedir o erro: S� testa no intervalo entre [0-10]
	if(N1>=0 && N1<=10 && N2>=0 && N2<=10){
		
		M=(N1+N2)/2;
		printf("\nM�dia: %.2f", M);
		
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
		printf("\nVoc� n�o inseriu notas v�lidas");
	}
	
	return 0;
}
