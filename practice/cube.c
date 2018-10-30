#include<stdio.h>
main()
{
	int n;
	int i=1;
	printf("enter max value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  printf("cube of numbers is:%d\n",(i*i*i));
	}
}
