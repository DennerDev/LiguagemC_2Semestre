// 1º Considere o progama abaixo, e asssinale alternative que corresponde á saida apresentada na tela.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, k;

    k = 0;

    for (i=1 ; i<=3 ; i++) {
      k++;
      
      if (i*3 < 4 )  {
          k++; printf(" Maca ");
      }
      else printf(" Pera ");

      if (k<5) printf (" Melancia ");
    }
    return 0;
}

// Resposta: Maça, Melancia, Pera, Melancia, Pera, Melancia