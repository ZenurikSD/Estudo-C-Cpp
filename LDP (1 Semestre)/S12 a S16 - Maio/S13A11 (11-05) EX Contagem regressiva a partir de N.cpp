#include <stdio.h>
#include <locale.h>

int N;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Contagem regressiva a partir de: ");
	scanf("%d",&N);
	
	if(N>0){
		printf("\n");
		for (N;N>=0;N--)
			printf(" %d.. ", N);
	}
	else
		printf("\n Digite um valor maior que 0");
}
