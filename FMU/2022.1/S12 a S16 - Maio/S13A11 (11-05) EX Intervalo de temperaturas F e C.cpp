#include <stdio.h>
#include <locale.h>

float C, F;
int i;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Varia��o de 50 a 65�F para �C\n");
	
	for(i=50;i<=65;i++){
		C = 0.56*(i-32);
		
		printf("\n  %d�F = %.2f�C", i, C);
	}
}
