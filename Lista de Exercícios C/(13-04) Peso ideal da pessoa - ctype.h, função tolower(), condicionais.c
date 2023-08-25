#include <stdio.h>  //Biblioteca para utilizar comandos de entrada e saída
#include <locale.h> //Utilizar caracteres de outras línguas
#include <ctype.h>  //"Character TYPE" - Biblioteca para manipulação de caracteres

//Variáveis
float altura, peso;
char sexo;

//Execução Principal
int main(){
	setlocale(LC_ALL, "Portuguese"); //formato PT-BR
	
	//Entradas
	printf("Qual o seu sexo? [M/F]: ");
	scanf("%c", &sexo);
	
	printf("E a sua altura? (m): ");
	scanf("%f", &altura);
	
	sexo = tolower(sexo); //Altera o caractere para minúsculo
	
	//Condicionais
	if(sexo == 'm'){
		peso = (72.7*altura) - 58;
	}
	else{
		peso = (62.1*altura) -44.7;
	};
	
	//Saída
	printf("O seu peso ideal é %.2f kg \n", peso);
}
