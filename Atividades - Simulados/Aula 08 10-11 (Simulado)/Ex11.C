#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;

    for (N = 1; N <= 9; N++)
        if (N % 2 == 1)
            printf("  %d ", N);

    return 0;
}
