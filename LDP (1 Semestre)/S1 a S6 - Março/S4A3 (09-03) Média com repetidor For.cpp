#include<stdio.h> //Habilita o uso de entradas e saídas de dados
#include<locale.h> //Habilita caracteres de outras línguas

//Variáveis
int i;
float N1, N2, M;

//Execução Principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entrada complicada demais sem necessidade:
	for(i = 1; i < 3; i=i + 1){

		//Morri.. o igual precisa ser duplo... (= atribuição; == igualdade)
		
		if(i==1){
			printf("Digite a %dª nota: ", i);
			scanf("%f", &N1);
		}
		else{
			printf("Digite a %dª nota: ", i);
			scanf("%f", &N2);
		};
	};
	
	//Cálculo da média
	M = (N1+N2)/2;
	
	//Saída
	printf("\nMédia: %.2f", M);
	
	return 0;
}
