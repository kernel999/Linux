#include<stdio.h>
main()
{
	int a=5;
	a=6;
	a=a+5*a;
	printf("a=%d\n",a);//first * operation then +=36
}
