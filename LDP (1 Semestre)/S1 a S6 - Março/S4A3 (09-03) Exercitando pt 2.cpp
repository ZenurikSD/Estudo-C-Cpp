#include<stdio.h> //biblioteca para usar entradas e sa�das de dados
#include<locale.h> //incluir caracteres de outras l�nguas

//Vari�veis
int idade;
float altura;

//Execu��o Principal
int main(){	
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres em PT

	printf("Qual a sua idade? "); //Entradas
	scanf("%d", &idade);
	
	printf("\nE a sua altura? ");
	scanf("%f", &altura);
	
	printf("\n \nVoc� tem %d anos e %.2fm de altura", idade, altura); //Sa�das
	
	return 0; //Fim da execu��o
}
