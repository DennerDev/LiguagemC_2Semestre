// Vetor e Arry
// Ler 10 notas e guardar no vetor. Mostrar as Dez notas no final.

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    
    float vet [10];
    int i ;

    // ler o vetor 
    for (i=0 ; i<=9 ; i++) {
      printf("\nDigite a nota  não do Vet[%d] = ", i);
      scanf("%f", &vet[i]);
    }

    // Mostrar o veotr na tela 

    for (i=0 ; i=9 ; i++) {
        printf("\n%f ",vet[i]);
    }
    return 0;
}
