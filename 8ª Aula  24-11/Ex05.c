// Ler um vetor de 15 elementos inteiros. Mostrar o maior numero lido! 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[15], i , maior;

    // ler o vetor de 15 elementos interios 

    for (i=0; i<=14; i++) {
        printf("Digite o n do vet[%d] = ",i);
        scanf("%d", &vetor[i]);
    }

    // parametro para encontrar o maior nº

    maior = vetor[0];

    // varrer Todo vetor, procurando um nº > maior 

    for (i=0 ; i<=14; i++)
    if (vetor[i] > maior)

    maior = vetor[i];

    printf("\nO maoir numero lido é %d ", maior); 
    return 0;
}
