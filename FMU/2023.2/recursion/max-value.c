#include <stdio.h>
#include <stdlib.h>


/* Encontrar o maior valor em um vetor usando uma função recursiva:
    @param tam O tamanho do vetor
    @param *vet O endereço para o início do vetor
 */ 
int get_max(int tam, int *vet)
{
    if (tam == 1)
        return vet[0];
    else {
        int x;
        x = get_max(tam - 1, vet);

        if (x > vet[tam - 1])
            return x;
        else 
            return vet[tam - 1];
    }
}

int main()
{
    int vet[] = {20, 10, 5, 99, 200, 1};

    printf("Maior valor: %i\n", get_max(6, vet));
}