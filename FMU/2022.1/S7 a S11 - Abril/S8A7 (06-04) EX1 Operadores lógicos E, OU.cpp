//"Faça um algoritmo para verificar e imprimir se um número está no intervalo
// entre 5 e 100

#include<stdio.h> //Biblioteca para inserir entradas e saídas de dados
//Variáveis
int N1;

//Execução Principal
int main(){
	printf("Digite o seu numero: ");
	scanf("%d",&N1);
	
	//Condição
	if(N1 >= 5 && N1 <= 100){
		printf("\n \n O numero esta contido entre 5 e 100");
	}
	else{
		printf("\n\n Nao esta contido entre 5 e 100");
	}
	
	//Fim
	return 0;	
}
