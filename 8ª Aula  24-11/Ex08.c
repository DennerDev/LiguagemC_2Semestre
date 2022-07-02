/*
7) Ler o vetor A de 5 elementos inteiros.
Calcular o vetor B de 5 elementos inteiros, sabendo que B é o DOBRO de A.
Mostre o vetor B na tela.
*/

#include <stdio.h>
int main(void)
{
    int A[5], B[5], i;

    // ler o vetor A
    for (i=0 ; i<=4 ; i++)
    {
      printf ("Digite um nº no vetor A[%d] = ",i);
      scanf ("%d",&A[i]);
    }

    printf ("\n\nVetor B:");
    //calcular o vetor B e mostrar o B na tela
    for (i=0 ; i<=4 ; i++)
    { 
        B[i] = A[i] * 2;
        printf ("\n%d" , B[i]);
    }
  return 0;
}