/* PDF Ex1: Operações aritméticas
	-Leia 4 valores, dois x e dois y, que significam 2 coordenadas
	em um plano.
		p1(x1,y1) e p2(x2,y2)
	- Calcule a distância entre esses pontos, com precisão de 4
	casas decimais, usando essa fórmula:
		\sqrt{ (x2-x1)² + (y2-y1)² }
	- Imprima o valor da distância.
*/

#include <stdio.h> 	//Entradas e saídas de dados
#include <locale.h> //Regionalização para PT-BR
#include <math.h>   //Funções matemáticas

float xA, xB, yA, yB, dist;

int main(){
 setlocale(LC_ALL, "Portuguese");

	printf("Insira a coordenada inicial (x1, y1): \n");
	scanf("%f %f", &xA, &yA);
	printf("Insira a coordenada final (x2, y2): \n");
	scanf("%f %f", &xB, &yB);

	//Cálculo da distância
	dist = sqrt( pow(xB-xA, 2) + pow(yB-yA, 2) ); //Será?

	printf("\n\nA distância entre as coordenadas é de %.4f", dist);

	return 0;
}
