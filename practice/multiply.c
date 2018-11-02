#include<stdio.h>
main()
{
	int m=6,n=3;
	printf("%d\t",multiply(m,n));
	printf("%d\t",multiply(11,4));
	printf("%d\t",multiply(m+n,m-n));
	printf("%d\n",multiply(6,sum(m,n)));
}
	multiply(int x, int y)
	{
	int p;
	p=x*y;
	return p;
	}
	sum(int x,int y)
	{
	return x+y;
	}

