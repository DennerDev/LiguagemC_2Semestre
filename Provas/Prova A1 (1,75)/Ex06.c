// 6º Sunponha que, durante a execuçãp de um progama correspondente ao algoritmo a seguir,
// o úsusario forneçe o valor 4 como entrada. Neste caso, qual será a resposta apresentada.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a, b;

    printf("Numero: ");
    scanf("%d",&n);

    a = 0;   b = 1;

    while (n >= 0){
        a = a + b;
        b = b + 2;
        n = n - 1; 
    }
    printf("%d ",a);
    return 0;
}
// Resposta: 25
