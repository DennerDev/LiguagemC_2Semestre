// 4ºConsidere o trecho ode código C abaixo, o que será impresso na tela ?

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, x;

    x = 5;  i = 1;

    while ( i < 6 ){
        x = x * (-1);

        if (x < i) x= x + i;  i++;
    }
    printf("\n%d ", x);

    return 0;
}
// Resposta: 0
