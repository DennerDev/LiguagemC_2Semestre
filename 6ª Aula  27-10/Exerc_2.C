/* 
2) Ler 2 números e mostrar a soma.
Perguntar se o usário deseja continuar no sistema.
O programa deverá ficar em loop, enquanto o usuário desejar.

OBS: O programa só poderá aceitar S/s/N/n
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

        while (op!='s' && op!='S' && op!='n' && op!='N')
        {
            printf ("Seu pateta, vc errou! ");
            printf ("Deseja continuar <S/N>: ");
            scanf ("%s",&op);
        }    
  }

  return 0;
}
