/* PDF Ex1: Opera��es aritm�ticas
	-Leia 4 valores, dois x e dois y, que significam 2 coordenadas
	em um plano.
		p1(x1,y1) e p2(x2,y2)
	- Calcule a dist�ncia entre esses pontos, com precis�o de 4
	casas decimais, usando essa f�rmula:
		\sqrt{ (x2-x1)� + (y2-y1)� }
	- Imprima o valor da dist�ncia.
*/

#include <stdio.h> 	//Entradas e sa�das de dados
#include <locale.h> //Regionaliza��o para PT-BR
#include <math.h>   //Fun��es matem�ticas

float xA, xB, yA, yB, dist;

int main(){
 setlocale(LC_ALL, "Portuguese");

	printf("Insira a coordenada inicial (x1, y1): \n");
	scanf("%f %f", &xA, &yA);
	printf("Insira a coordenada final (x2, y2): \n");
	scanf("%f %f", &xB, &yB);

	//C�lculo da dist�ncia
	dist = sqrt( pow(xB-xA, 2) + pow(yB-yA, 2) ); //Ser�?

	printf("\n\nA dist�ncia entre as coordenadas � de %.4f", dist);

	return 0;
}
