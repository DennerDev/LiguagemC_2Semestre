// Existee uma salade aula com 8 au=lunos. Leia a nota dos 8 alunos e guardar no vetor
//Calcular e mostrar a Média da Sala. Mostrar o veotr do fim para o começo.
// Mostrsr na tela apenas as Maiores notas

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float vet[8], soma = 0;
    int i;
    
    // ler o vetor
    for (i=0; i<=7; i++) {
        printf("Digite a nota fo vet[%d] = ",i );
        scanf("%f", &vet[i]);

        soma = soma + vet[i];
    }

    soma = soma /8; // Média da sala;
    
    printf("\nA media é %2.f ", soma);  


    // varrer o vetor e mostrar as notas > média 
    for (i=0; i<=7; i++)
     if (vet[i] > soma ) printf("\n%2.f ",vet[i]); 

    return 0;
}
