#include <stdio.h>
#include <stdlib.h>

int buscaLinearRecursiva(int *vet, int size, int x, int pos)
{
    // Caso base
    if (pos == 0)
        return -1;
    else if (x == vet[pos - 1])
        return pos - 1;
    else 
        return buscaLinearRecursiva(vet, size, x, pos - 1);
}

int main()
{
    int vet[] = {5, 10, 15, 20, 25};
    int x = 4;

    if (buscaLinearRecursiva(vet, 5, x, 4) != -1) {
        printf("%d está no vetor", x);
    } else {
        printf("Não encontrado");
    }
}