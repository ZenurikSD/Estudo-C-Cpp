// Apresentação do Switch-case
// substituir o mar de else-ifs

//Simule uma calculadora simples. O usuário digita 2 números e o tipo de
//operação que deseja realizar.

#include <stdio.h> //Header para utilizar entradas e saídas
#include <locale.h> //Header para localização

float N1, N2;
char op;    //operador

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Entrada
	printf("Digite o 1º número: ");
	scanf("%f", &N1);
	
	printf("Escolha a operação (+ - * /): ");
	scanf(" %c", &op); //espaço+%c para caractere único
	
	printf("Digite o 2º número: ");
	scanf("%f", &N2);
	
	
	printf("\n\n");
	
	//Cálculos
	// *caractere único é aspas simples
	switch(op){
		case '+':
			//Não precisa salvar em variável, dá pra calcular direto por aqui:
			printf("Soma = %.2f", N1+N2);
		break;
		
		case '-':
			printf("Subtração = %.2f", N1-N2);
		break;
		
		case '*':
			printf("Multiplicação = %.2f", N1*N2);
		break;
			
		case '/':
			if (N2!=0)
				printf("Divisão = %.2f", N1/N2);
			else
				printf("Não é possível dividir por zero!");
		break;
			
		default:
			printf("Escolha um operador válido");
	}
	
	return 0;
	
}


