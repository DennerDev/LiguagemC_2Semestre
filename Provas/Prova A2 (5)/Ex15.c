#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cont, num, res;
    
    num = 1;
    res = 0;

    for (cont=0 ; cont<5 ; cont++) {
        num = num * cont;
        res = res + num;
    }

    printf("%d \n ", res);

    return 0;
}

// Resposta C.0
