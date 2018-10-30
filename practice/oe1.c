#include<stdio.h>
main()
{
	int a=-3;
	a=-a-a+!a;
	printf("%d\n",a);//-3-3=-6 it prints +6
}

