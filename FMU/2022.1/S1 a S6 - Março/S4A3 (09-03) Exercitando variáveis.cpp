#include<stdio.h> //biblioteca para usar entradas e sa�das de dados
#include<locale.h> //permite utilizar l�nguas diferentes

//Vari�veis
int num;

//Execu��o Principal
int main(){
	setlocale(LC_ALL, "Portuguese"); //Habilita caracteres em portugu�s
	
	printf("Digite um n�mero: "); //Entrada
	scanf("%d", &num);
	
	printf("\n Voc� digitou: %d\n", num); //Sa�da
	
	return 0; //Fim da execu��o
}
