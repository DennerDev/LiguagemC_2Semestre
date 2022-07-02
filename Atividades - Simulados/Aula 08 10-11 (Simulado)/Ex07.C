#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A, T = 0;
    scanf("%d", &A);

    while (A < 10)
    {
        T = A + T;
        A++;
    }
    printf("%d", T);

    return 0;
}
