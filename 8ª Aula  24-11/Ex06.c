

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[15], i , maior, pos;


    // ler o vetor de 15 elementos interios 

    for (i=0; i<=14; i++) {
        printf("Digite o n do vet[%d] = ",i);
        scanf("%d", &vetor[i]);
    }

    // parametro para encontrar o maior nº

    maior = vetor[0];
    pos = i;

    // varrer Todo vetor, procurando um nº > maior 

    for (i=0 ; i<=14; i++)
    if (vetor[i] > maior) {
        maior = vetor[i]; pos = i;
    }

    maior = vetor[i];

    printf("\nO maoir numero lido é %d ", maior); 
    printf("\nO n esta guardado na posicao %d do vetor %d ", pos); 

    return 0;
}
