

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, vet[14];

    // ler o vetor
    for (i=0 ; i<=13 ; i++) {
        printf("Digite un nº no vet[%d] = ", i);
        scanf("%d", &vet[i]);
    }

    // mostrsr o veotr do final para o inicio
    for (i=13 ; i>=0 ; i--) {
        printf("\n%d ", vet[i]);
    }
    return 0;
}
