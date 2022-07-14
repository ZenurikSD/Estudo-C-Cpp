#include <stdio.h> //HEADER para utilizar funções de entrada e saída de dados
#include <locale.h>

/* Leia um número de DDD e informe ao usuário de qual cidade ele é
	Caso não esteja presente na lista, informe DDD não cadastrado
*/

int ddd;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o DDD: ");
	scanf("%d", &ddd);
	printf("\n");
	
	if (ddd==11){
		printf("DDD(%d) - São Paulo, SP", ddd);
		}
		else if (ddd==21){
			printf("DDD(%d) - Rio de Janeiro, RJ", ddd); }
		else if (ddd==27){
			printf("DDD(%d) - Vitória, ES", ddd); }
		else if (ddd==19){
			printf("DDD(%d) - Campinas, SP", ddd); }
		else if (ddd==31){
			printf("DDD(%d) - Belo Horizonte, MG", ddd); }
		else if (ddd==61){
			printf("DDD(%d) - Brasília, DF", ddd); }
		else if (ddd==71){
			printf("DDD(%d) - Salvador, BA", ddd); }
		else if (ddd==32){
			printf("DDD(%d) - Juiz de Fora, MG", ddd); }
	else{
		printf("DDD não cadastrado");
	}
	
	printf("\n");
	
	return 0;
}
