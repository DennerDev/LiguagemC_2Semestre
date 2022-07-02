// 8º Analise o seguinte progama abaixo.
/*
Consider que os valores lidos para x1,x2,x3 tenham sido, representados: 5,4,3.
É correto afirma que o valr impresso ao final da execução do algoritmo é igual a:
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x1, x2, x3, i;

    printf("Digite x1: "); 
    scanf ("%d",&x1);

    printf("Digite x2: "); 
    scanf ("%d",&x2);

    printf("Digite x3: "); 
    scanf ("%d",&x3);

    for (i=1 ; i <= x1 ; i++){
        x2 = x1 + x3;
        x3 = x1 - x2;
    } 

    printf("%d ", x1+x2);

    return 0;
}
// Resposta: 13


