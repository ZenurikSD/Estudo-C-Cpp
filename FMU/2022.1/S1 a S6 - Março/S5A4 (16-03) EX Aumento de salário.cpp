#include <stdio.h> //Header para entradas e sa�das
#include <locale.h> //Header para formatos em outras l�nguas

float sal;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entradas
	printf("Digite o sal�rio do funcion�rio: R$");
	scanf("%f", &sal);
	
	//C�lculo
	sal = sal*1.25;
	
	//Sa�da
	printf("\nNovo sal�rio com aumento: R$ %.2f", sal);
	
	return 0;
}
