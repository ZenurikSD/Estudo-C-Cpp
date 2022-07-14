#include<stdio.h> //biblioteca para usar entradas e saídas de dados
#include<locale.h> //incluir caracteres de outras línguas

//Variáveis
int idade;
float altura;

//Execução Principal
int main(){	
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres em PT

	printf("Qual a sua idade? "); //Entradas
	scanf("%d", &idade);
	
	printf("\nE a sua altura? ");
	scanf("%f", &altura);
	
	printf("\n \nVocê tem %d anos e %.2fm de altura", idade, altura); //Saídas
	
	return 0; //Fim da execução
}
