#include <stdio.h>

int main(int argc, char const *argv[])
{
    int res, cont, x, n;
    cont = 1;
    res = 0;
    x = 2;
    n = 4;

    while (cont >= n)
    {
        res = res * x;
        cont = cont + 1;
        printf(" \t %d", cont);
    }

    printf(" \t %d", res);

    return 0;
}
