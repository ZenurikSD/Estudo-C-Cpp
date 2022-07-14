#include <stdio.h>
#include <locale.h>

// Leia a altura de 10 pessoas, mostre quantos tem acima de 1,60m

float altura;
int cont, i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf(" Altura de 10 pessoas\n");
	
	for(i=1; i<=10; i++){
		printf("  Pessoa %d (cm): ", i);
		scanf("%f", &altura);
		
		if(altura>160){
			cont++;
		}
	}
	
	printf("\n %d pessoa(s) tem altura maior que 1,60m", cont);
}
