/* Ler um numero Float. Informe se o numero é:
  Positivo, Negativo, Nulo
*/

#include <stdio.h>
int main(void) {
   float num;

   printf ("informe um numero: ");
   scanf ("%f", &num);

   if (num > 0)         printf ("Positivo");
   else   if (num < 0)  printf ("Negativo");
   else                 printf ("Nulo");

   return 0; 
}