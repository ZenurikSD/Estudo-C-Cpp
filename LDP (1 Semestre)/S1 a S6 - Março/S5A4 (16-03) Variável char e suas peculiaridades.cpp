#include <stdio.h> //Header para entradas e sa�das
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
	
	printf("Qual o seu g�nero? [M/F] ");
	scanf(" %c", &genero);
	
	//Sa�das
	printf("\n\n Ol� %s! Voc� tem %d anos, sexo %c e %.2fm de altura.", nome, idade, genero, altura);

	return 0;
}
