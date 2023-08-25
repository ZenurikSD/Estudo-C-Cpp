// Verificar se um empregado est� qualificado para se aposentar. Um dos
// requisitos precisa ser satisfeito:
// - Ter ao menos 65 anos
// - Ter ao menos 30 anos de trabalho
// - Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos.

// Leia a idade e tempo de trabalho do empregado e mostre isso + mensagem
// se ele est� apto para se aposentar ou n�o


#include<stdio.h> //STandard Input Output library
#include<locale.h> //Biblioteca para inserir caracteres de outras l�nguas
					//requer definir o setlocale(escopo, l�ngua) no main()
int idade, anosT;

int main(){
	//Habilitar o uso de caracteres acentuados
	setlocale(LC_ALL, "Portuguese");	
	
	//Entradas
	printf(" ===Teste para aposentadoria===");
	printf("\n Insira sua idade: ");
	scanf("%d",&idade);
	
	printf(" H� quantos anos voc� trabalha: ");
	scanf("%d",&anosT);
	
	//Mostre idade e tempo de trabalho
	printf("\n\n");
	printf(" - Idade: %d \n", idade);
	printf(" - Tempo de trabalho: %d", anosT);
	printf("\n\n");
	
	//Condicional composto com operadores l�gicos
	if(idade >= 65 || anosT >= 30 || (idade >= 60 && anosT >= 25)) {
		printf(" Est� apto para se aposentar!");
	}
	else {
		printf(" N�o � poss�vel se aposentar ainda.");
	};
	
	//Fim
	return 0;
}
