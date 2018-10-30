#include<stdio.h>
main()
{
	int a,b,max,sum,diff;
	printf("enter the value's of a and b:");
	scanf("%d %d",&a,&b);
	max=a>b ? a:b;
	if(a>b)
	printf("sum of two numbers is %d\n",a+b);
	else
	printf("diff of two numbers is %d\n",a-b);
}
	
