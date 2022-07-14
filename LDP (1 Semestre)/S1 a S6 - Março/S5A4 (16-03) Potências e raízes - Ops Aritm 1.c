/*
	Calcule e leia um n�mero. Imprima:
	- n ao quadrado e ao cubo
	- raiz quadrada e c�bica de n
*/
#include <stdio.h> //Header para entradas e sa�das
#include <locale.h> //Header para usar caracteres em pt
#include <math.h> //Header para pow(), sqrt() e cbrt()

int n;
float x;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um n�mero qualquer: ");
	scanf("%d",&n);
	
	x = n;
	
	//C�lculos e sa�das em um s�
	printf("\n - %d ao quadrado = %.1f", n, pow(x, 2));

	printf("\n - %d ao cubo = %.1f", n, pow(x, 3));

	printf("\n - Raiz quadrada de %d = %.2f", n, sqrt(x));

	printf("\n - Raiz c�bica de %d = %.2f", n, cbrt(x));
	
	//Sa�da
	return 0;
}
