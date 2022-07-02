#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A, B;
    scanf("%d", &B);
    A = 2;
    while (A <= 30)
    {
        B = B + 2;
        if (B > 18)
            B--;
        A = A + B;
    }
    printf("%d", A);
    printf("%d", B);

    return 0;
}
