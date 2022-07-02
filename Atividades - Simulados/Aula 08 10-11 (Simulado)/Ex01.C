#include <stdio.h>
int main(void)
{    	int  N, A, B;
	scanf ("%d" , &N);	
	A = 0;
	B = 1;
	while (N >=0) 
	{
		A = A + B;
		B = B + 2;
		N = N - 1;
	}

	printf (" %d " , A);
	return 0;
}
