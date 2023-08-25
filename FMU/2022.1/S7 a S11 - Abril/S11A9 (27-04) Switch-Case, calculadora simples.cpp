// Apresenta��o do Switch-case
// substituir o mar de else-ifs

//Simule uma calculadora simples. O usu�rio digita 2 n�meros e o tipo de
//opera��o que deseja realizar.

#include <stdio.h> //Header para utilizar entradas e sa�das
#include <locale.h> //Header para localiza��o

float N1, N2;
char op;    //operador

int main(){
	setlocale(LC_ALL, "portuguese");
	
	//Entrada
	printf("Digite o 1� n�mero: ");
	scanf("%f", &N1);
	
	printf("Escolha a opera��o (+ - * /): ");
	scanf(" %c", &op); //espa�o+%c para caractere �nico
	
	printf("Digite o 2� n�mero: ");
	scanf("%f", &N2);
	
	
	printf("\n\n");
	
	//C�lculos
	// *caractere �nico � aspas simples
	switch(op){
		case '+':
			//N�o precisa salvar em vari�vel, d� pra calcular direto por aqui:
			printf("Soma = %.2f", N1+N2);
		break;
		
		case '-':
			printf("Subtra��o = %.2f", N1-N2);
		break;
		
		case '*':
			printf("Multiplica��o = %.2f", N1*N2);
		break;
			
		case '/':
			if (N2!=0)
				printf("Divis�o = %.2f", N1/N2);
			else
				printf("N�o � poss�vel dividir por zero!");
		break;
			
		default:
			printf("Escolha um operador v�lido");
	}
	
	return 0;
	
}


