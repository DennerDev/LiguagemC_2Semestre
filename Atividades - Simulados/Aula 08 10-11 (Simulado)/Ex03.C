#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z, i;
    x = 5;
    y = 5;
    z = 5;

    if ((x - 1) > 2)
        y = y + 1;
    else
        y = y - 1;

    z = x + y;

    for (i = 1; i <= 9; i = i + 2)
        y = y + 1;

    z = z + y + x;
    printf("%d", z);

    return 0;
}
