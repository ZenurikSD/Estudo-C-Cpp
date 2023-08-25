#include <stdio.h> //Header para entradas e saídas
#include <locale.h>

int idade;
float altura;
char nome[40], genero;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entradas
	printf("Digite seu nome: ");
	scanf("%[^\n]", &nome);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	printf("Qual o seu gênero? [M/F] ");
	scanf(" %c", &genero);
	
	//Saídas
	printf("\n\n Olá %s! Você tem %d anos, sexo %c e %.2fm de altura.", nome, idade, genero, altura);

	return 0;
}
