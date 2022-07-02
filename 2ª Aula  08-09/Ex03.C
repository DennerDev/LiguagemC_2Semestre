/* Ler 2 numeros interios , MOstra os números na ordem crecente
   ignore a codição de iguais
*/

#include <stdio.h>
int main (void) {
   int A, B;

   printf("Digite o prmineiro numero ");
   scanf ("%d", &A);

   printf("Digite o prmineiro numero ");
   scanf ("%d", &B);

   if (A < B)  printf ("Ordem crecente: %d e %d ", A, B);
   else        printf ("Ordem crecente: %d e %d ", B, A);

   return 0;
}