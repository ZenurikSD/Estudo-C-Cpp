#include <stdio.h> //Header de entradas e sa�das
#include <locale.h> //Localização

// Aquecimento de Repetidor For

int l, c, i, j;
int vetor[5]; 	 //Array com 5 posi��es
int matriz[3][3];//Matriz 3x3

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Crescente
	for (i=0;i<=10;i+=2)
		printf("\n  [%d]",i);
	
	printf("\n----------------------\n");
	
	//Decrescente
	for (i=10;i>=0;i-=2)
		printf("\n..[%d]", i);
		
 	printf("\n----------------------\n");
	
	//Tentando uma grade
	for (l=1; l<=3; l++){ 		//Linha
		for (c=1; c<=3; c++) 	//Coluna
			printf("[%d]", c); 	//Posi��o
			
		printf("\n");           //Pula a linha
	}
	
	printf("\n----------------------\n");
	
	//Preenchendo um vetor
	printf("\nvetor: ");
	for (i=0;i<5;i++){
		printf("Posi��o [%d]: ", i); 	//Mostra a posi��o
		scanf("%d", &vetor[i]);     //Preenche a posi��o
	}
	
	//Imprimindo o vetor
	printf("\nvetor[");
	for(i=0;i<5;i++){
		printf(" %d ",vetor[i]);
	}
	printf("]");
	
	printf("\n----------------------\n");
	
	//Preenchendo uma matriz
	printf("\nmatriz:\n");
	for (i=0;i<3;i++){          		//Linhas
		for(j=0;j<3;j++){       		//Colunas
			printf("  Posi��o[%d,%d]: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	//Visualizando a matriz
	printf("\n Matriz [3x3]: \n");
	for (i=0;i<3;i++){         			//Linhas
		printf("  ");                   //Espa�o antes da linha
		for(j=0;j<3;j++){       		//Colunas
			printf("[%d]", matriz[i][j]);
		}
		printf("\n");                   //Pula a linha
	}
	
	
	return 0;
}

