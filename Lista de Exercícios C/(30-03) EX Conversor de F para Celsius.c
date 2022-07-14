#include<stdio.h> // inclui a biblioteca para usar entradas e sa�das

// Fa�a um programa que transforme a temperatura de Fahrenheit para Celsius, 
// utilizando a seguinte formula:
// Celsius = ((Fahrenheit -32) * 5 ) / 9

float tempC, tempF;

int main(){
	
	printf(">> Conversor de Fahrenheit para Celsius <<   \n");
	
	//Entradas
	printf("  Digite a temperatura (F): ");
	scanf ("%f", &tempF);
	
	//C�lculo ( = � "recebe", n�o igualdade (==) )
	tempC = ((tempF - 32) * 5) / 9;
	
	//Sa�das
	printf("\n \n");
	printf("  %.1f F corresponde a %.1f C \n", tempF, tempC);
	
	//Fim da execu��o
	return 0;	
}
