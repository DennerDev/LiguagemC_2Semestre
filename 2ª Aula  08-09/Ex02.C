/* Ler Dois Números inteiros. Mostra o Maior numero lido. Ignore a codição
 de núeros iguais, usar os opredores relacionais.(<, >, >=, =<) 
*/

#include <stdio.h>
int main (void) {
   int A, B;
   printf ("Digiteo o primeiro numero: ");
   scanf ("%d",&A);

   printf ("Digite o segundo numero: ");
   scanf ("%d",&B);

   if (A > B)   printf ("O Maior numero lido foi %d ", A);
   else         printf ("O Maior numero lido foi %d ", B);

   return 0;
}
