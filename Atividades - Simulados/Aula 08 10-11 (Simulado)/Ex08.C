#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A, B, i, soma;
	A = 4;
	soma = 0;
	i = 0;

	while (i < A)
	{
		scanf  ("%d" , &B );
		soma = soma + B;
		i = i + 1 ;
	}
			
	printf  ("%d" , soma );

    return 0;
}
