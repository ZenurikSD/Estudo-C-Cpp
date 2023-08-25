#include<stdio.h> //biblioteca para usar entradas e saídas de dados
#include<locale.h> //permite utilizar línguas diferentes

//Variáveis
int num;

//Execução Principal
int main(){
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres em português
	
	printf("Digite um número: "); //Entrada
	scanf("%d", &num);
	
	printf("\n Você digitou: %d\n", num); //Saída
	
	return 0; //Fim da execução
}
