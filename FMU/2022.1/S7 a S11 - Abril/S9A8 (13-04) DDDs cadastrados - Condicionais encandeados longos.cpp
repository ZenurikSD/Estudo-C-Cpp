#include <stdio.h> //HEADER para utilizar fun��es de entrada e sa�da de dados
#include <locale.h>

/* Leia um n�mero de DDD e informe ao usu�rio de qual cidade ele �
	Caso n�o esteja presente na lista, informe DDD n�o cadastrado
*/

int ddd;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o DDD: ");
	scanf("%d", &ddd);
	printf("\n");
	
	if (ddd==11){
		printf("DDD(%d) - S�o Paulo, SP", ddd);
		}
		else if (ddd==21){
			printf("DDD(%d) - Rio de Janeiro, RJ", ddd); }
		else if (ddd==27){
			printf("DDD(%d) - Vit�ria, ES", ddd); }
		else if (ddd==19){
			printf("DDD(%d) - Campinas, SP", ddd); }
		else if (ddd==31){
			printf("DDD(%d) - Belo Horizonte, MG", ddd); }
		else if (ddd==61){
			printf("DDD(%d) - Bras�lia, DF", ddd); }
		else if (ddd==71){
			printf("DDD(%d) - Salvador, BA", ddd); }
		else if (ddd==32){
			printf("DDD(%d) - Juiz de Fora, MG", ddd); }
	else{
		printf("DDD n�o cadastrado");
	}
	
	printf("\n");
	
	return 0;
}
