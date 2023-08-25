#include <stdio.h>  //Biblioteca para utilizar comandos de entrada e sa�da
#include <locale.h> //Utilizar caracteres de outras l�nguas
#include <ctype.h>  //"Character TYPE" - Biblioteca para manipula��o de caracteres

//Vari�veis
float altura, peso;
char sexo;

//Execu��o Principal
int main(){
	setlocale(LC_ALL, "Portuguese"); //formato PT-BR
	
	//Entradas
	printf("Qual o seu sexo? [M/F]: ");
	scanf("%c", &sexo);
	
	printf("E a sua altura? (m): ");
	scanf("%f", &altura);
	
	sexo = tolower(sexo); //Altera o caractere para min�sculo
	
	//Condicionais
	if(sexo == 'm'){
		peso = (72.7*altura) - 58;
	}
	else{
		peso = (62.1*altura) -44.7;
	};
	
	//Sa�da
	printf("O seu peso ideal � %.2f kg \n", peso);
}
