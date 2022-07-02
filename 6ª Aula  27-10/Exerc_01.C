/* 
1 Ler 2 números e mostrar a soma.
Perguntar se o usário deseja continuar no sistema.
O programa deverá ficar em loop, enquanto o usuário desejar.
*/

#include <stdio.h>

int main(void)
{
  int A, B;
  char op='s';  // forçar a entrada no while
        
  while (op=='s' || op=='S')
  {      
        printf("\n\nDigite o 1º número: ");
        scanf ("%d",&A);

        printf("Digite o 2º número: ");
        scanf ("%d",&B);

        printf ("A soma é %d ",A+B);
        
        printf ("\nDeseja continuar <S/N>: ");
        scanf ("%s",&op);
  }

  return 0;
}