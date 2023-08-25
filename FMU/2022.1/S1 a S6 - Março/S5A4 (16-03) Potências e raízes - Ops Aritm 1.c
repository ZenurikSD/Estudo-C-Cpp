/*
	Calcule e leia um número. Imprima:
	- n ao quadrado e ao cubo
	- raiz quadrada e cúbica de n
*/
#include <stdio.h> //Header para entradas e saídas
#include <locale.h> //Header para usar caracteres em pt
#include <math.h> //Header para pow(), sqrt() e cbrt()

int n;
float x;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número qualquer: ");
	scanf("%d",&n);
	
	x = n;
	
	//Cálculos e saídas em um só
	printf("\n - %d ao quadrado = %.1f", n, pow(x, 2));

	printf("\n - %d ao cubo = %.1f", n, pow(x, 3));

	printf("\n - Raiz quadrada de %d = %.2f", n, sqrt(x));

	printf("\n - Raiz cúbica de %d = %.2f", n, cbrt(x));
	
	//Saída
	return 0;
}
