// Verificar se um empregado está qualificado para se aposentar. Um dos
// requisitos precisa ser satisfeito:
// - Ter ao menos 65 anos
// - Ter ao menos 30 anos de trabalho
// - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.

// Leia a idade e tempo de trabalho do empregado e mostre isso + mensagem
// se ele está apto para se aposentar ou não


#include<stdio.h> //STandard Input Output library
#include<locale.h> //Biblioteca para inserir caracteres de outras línguas
					//requer definir o setlocale(escopo, língua) no main()
int idade, anosT;

int main(){
	//Habilitar o uso de caracteres acentuados
	setlocale(LC_ALL, "Portuguese");	
	
	//Entradas
	printf(" ===Teste para aposentadoria===");
	printf("\n Insira sua idade: ");
	scanf("%d",&idade);
	
	printf(" Há quantos anos você trabalha: ");
	scanf("%d",&anosT);
	
	//Mostre idade e tempo de trabalho
	printf("\n\n");
	printf(" - Idade: %d \n", idade);
	printf(" - Tempo de trabalho: %d", anosT);
	printf("\n\n");
	
	//Condicional composto com operadores lógicos
	if(idade >= 65 || anosT >= 30 || (idade >= 60 && anosT >= 25)) {
		printf(" Está apto para se aposentar!");
	}
	else {
		printf(" Não é possível se aposentar ainda.");
	};
	
	//Fim
	return 0;
}
