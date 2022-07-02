
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int  a, b, c, x, i;
	a = 10;
	b = 10;
	c = 10;
	for (i=2 ; i<=10 ; i=i + 2)
	{
		scanf ("%d" , &x);
		if (x >=  a)   	{   	
					b = b + 2;
			      		c = c +  3;
				}	
	          	else 
			{	
				b = b - 3;
				c = c - 2;
	             	}      	
	}	
	x = b + c ;
	printf (" %d ", x);
	return 0;

}
