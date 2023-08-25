#include <stdio.h>
#include <locale.h>

float C, F;
int i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Variação de 50 a 65ºF para ºC\n");
	
	for(i=50;i<=65;i++){
		C = 0.56*(i-32);
		
		printf("\n  %dºF = %.2fºC", i, C);
	}
}
