#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r, s, t, i;

    scanf("%d", &r);
    scanf("%d", &s);
    scanf("%d", &t);

    for (i = 1; i <= 5; i++)
    {
        if (r >= s)
            t = t + s;
        else
            t = t - s;
        r++;
        s = s + 2;
    }
    printf("%d",t);

    return 0;
}
