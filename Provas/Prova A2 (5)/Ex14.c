#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a, b;

    printf ("Digite um numero: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    while ( n >= 0) {
      a = a + b;
      b = b + 2;
      n--;

    }

    printf("%d \n ", a);
    return 0;
}

// Resposta B.25
