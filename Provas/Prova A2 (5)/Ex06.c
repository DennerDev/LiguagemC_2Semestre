#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 25, y = 25, z;

    for (z=0 ; x >=y ; z++)
        x = x-y;

        printf("x= %d, y=%d, z=%d \n",x,y,z);
    return 0;
}

//Resposta  x= 0, y=25, z=1 