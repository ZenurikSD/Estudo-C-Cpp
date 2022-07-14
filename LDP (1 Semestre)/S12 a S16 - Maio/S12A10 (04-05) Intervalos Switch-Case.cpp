#include <stdio.h>
#include <locale.h>

int n;

//Compare um valor com o intervalo do switch?

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	switch(n){
		case -10 ... 0: //INERVALO DE NÚMEROS (começo...fim)
			printf("Está entre -10 e 0");
			break;
		case 1 ... 11:
			printf("Está entre 1 e 11");
			break;
		case 12 ... 24:
			printf("Está entre 12 e 24");
			break;
		case 25:
			printf("O número é igual a 25");
			break;
		default:
			printf("Fora de intervalo (-10 >= n <= 25)");
	}
	
	return 0;
}
