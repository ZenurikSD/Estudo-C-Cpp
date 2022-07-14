#include <stdio.h>
#include <locale.h>

/* N alunos querem calcular o volume de um cilindro circular.
   Solicite a cada um a altura e raio dos respectivos cilindros.
   Calcule e mostre o volume de cada cilindro de cada aluno.
   Mostre o maior volume encontrado e de qual aluno pertence.
   
   F�rmula de volume do cilindro
   vol = pi * raio� * altura
*/

int qtd, maiorVol, id;
float vol, raio, altura;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Quantos alunos querem realizar o c�lculo? ");
	scanf("%d",&qtd);
	printf("\n");
	
	//Repete na qtd de alunos;
	for (int i=0; i<qtd; i++){
		printf("-- [Aluno %d] Altura do cilindro (cm): ", i+1);
		scanf("%f",&altura);
		printf("-- [Aluno %d] Raio do cilindro   (cm): ", i+1);
		scanf("%f",&raio);
		
		//C�lculo em m^3 e sa�da
		vol = (3.141592 * raio*raio * altura)/100;
		printf("-> [Aluno %d] Volume = %.3f m� \n",i+1,vol);
		
		//Armazena o maior valor
		if (vol > maiorVol){
			maiorVol = vol;
			id = i+1;          //Aluno atual � atribu�do ao maior volume
		};
	}//for

	//Sa�da final
	printf("\n--------------------------------\n");
	printf("Maior volume: %.2f do aluno %d", vol, id);
	
 }

