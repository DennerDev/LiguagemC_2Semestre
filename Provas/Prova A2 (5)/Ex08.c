#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cont, x1 , x2, x3;

    printf("Digite um numero :");
    scanf("%d", &x1);

    printf("Digite um numero :");
    scanf("%d", &x2);

    printf("Digite um numero :");
    scanf("%d", &x3);

    for (cont=1 ; cont <= x1 ; cont++){
        x2 = x1 + x3;
        x3 = x1 - x2;
    }

    printf("%d", x1+x2);
    return 0;
}

// Resposta 	B.13
