#include <stdio.h> //Header para entradas e saídas
#include <locale.h> //Header para formatos em outras línguas

float sal;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entradas
	printf("Digite o salário do funcionário: R$");
	scanf("%f", &sal);
	
	//Cálculo
	sal = sal*1.25;
	
	//Saída
	printf("\nNovo salário com aumento: R$ %.2f", sal);
	
	return 0;
}
