#include<stdio.h> //Habilita o uso de entradas e sa�das de dados
#include<locale.h> //Habilita caracteres de outras l�nguas

//Vari�veis
int i;
float N1, N2, M;

//Execu��o Principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Entrada complicada demais sem necessidade:
	for(i = 1; i < 3; i=i + 1){

		//Morri.. o igual precisa ser duplo... (= atribui��o; == igualdade)
		
		if(i==1){
			printf("Digite a %d� nota: ", i);
			scanf("%f", &N1);
		}
		else{
			printf("Digite a %d� nota: ", i);
			scanf("%f", &N2);
		};
	};
	
	//C�lculo da m�dia
	M = (N1+N2)/2;
	
	//Sa�da
	printf("\nM�dia: %.2f", M);
	
	return 0;
}
